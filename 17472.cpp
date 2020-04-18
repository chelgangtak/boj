#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

typedef struct {
	int start;
	int end;
	int cost;
} Edge;

int N, M, a[10][10], inum=1, parent[7];
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
bool v[10][10];
queue<pair<int, int>> q;
vector<Edge> edge;

void bfs() {
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=N||newc<0||newc>=M) continue;
			if (a[newr][newc]!=1||v[newr][newc]==true) continue;
			v[newr][newc]=true;
			a[newr][newc]=inum;
			q.push(make_pair(newr, newc));
		}
	}
}

void cal(int r, int c, int k, int *island, int *dist) {
	*dist=0;
	while(a[r][c]==0) {
		(*dist)++;
		r+=dir[k][0];
		c+=dir[k][1];
		if (r<0||r>=N||c<0||c>=M) {
			*island=0;
			return;
		}
	}
	*island=a[r][c];
}

bool cmp(const Edge& x, const Edge& y) {
	return x.cost < y.cost;
}

int getParent(int x) {
	if (parent[x]==x) return x;
	parent[x]=getParent(parent[x]);
	return parent[x];
}

void unionParent(int a, int b) {
	a=getParent(a);
	b=getParent(b);
	if (a<b) parent[b]=a;
	else parent[a]=b;
}

bool find(int a, int b) {
	a=getParent(a);
	b=getParent(b);
	if (a==b) return true;
	else return false;
}

int main(void) {
	cin >> N >> M;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> a[i][j];
			v[i][j]=false;
		}
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (a[i][j]==1&&v[i][j]==false) {
				v[i][j]=true;
				a[i][j]=inum;
				q.push(make_pair(i, j));
				bfs();
				inum++;
			}
		}
	}
	inum--;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (a[i][j]==0) continue; // 일단 바다인 경우 제낌
			for (int k=0; k<4; k++) { // 인접한 상하좌우칸 확인
				int r=i+dir[k][0];
				int c=j+dir[k][1];
				if (r<0||r>=N||c<0||c>=M||a[r][c]!=0) continue; // 범위를 벗어나거나 섬이면 제낌
				int island, dist; // island는 만나게 되는 섬 번호, dist는 그곳까지 거리
				cal(r, c, k, &island, &dist);
				if (island==0||a[i][j]>island||dist<=1) continue; // 만나지 못하거나 중복이거나 거리가 1인경우 제낌
				edge.push_back({a[i][j], island, dist}); // edge 배열에 삽입 (크루스칼용)
			}
		}
	}
	sort(edge.begin(), edge.end(), cmp);
	for (int i=1; i<=inum; i++) parent[i]=i;
	int sum=0;
	for (int i=0; i<edge.size(); i++) {
		if (find(edge[i].start, edge[i].end)==true) continue;
		sum+=edge[i].cost;
		unionParent(edge[i].start, edge[i].end);
	}
	for (int i=1; i<=inum; i++) parent[i]=getParent(i);
	for (int i=1; i<=inum; i++) {
		if (parent[i]!=parent[1]) {
			sum=-1;
			break;
		}
	}
	cout << sum << endl;
	return 0;
}
