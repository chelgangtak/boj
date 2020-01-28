#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int N, a[20][20], cnt=0, size=2, ate;
pair<int, int> shark, fish;
queue<pair<int, int>> q;

int bfs() {
	int v[20][20]={{0,},0}, dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}}, d=1, first=0;
	v[shark.first][shark.second]=1;
	q.push(shark);
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		if (d>1&&a[r][c]!=0&&a[r][c]<size&&v[r][c]==d) {
			if (first==0) {
				fish.first=r;
				fish.second=c;
				first=1;
			}
			else {
				if (r<fish.first) {
					fish.first=r;
					fish.second=c;
				}
				else if (r==fish.first&&c<fish.second) {
					fish.first=r;
					fish.second=c;
				}
			}
			continue;
		}
		if (d>1&&v[r][c]>d) {
			while(!q.empty()) q.pop();
			break;
		}
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=N) continue;
			if (newc<0||newc>=N) continue;
			if (v[newr][newc]!=0) continue;
			if (a[newr][newc]<=size) {
				v[newr][newc]=v[r][c]+1;
				if (a[newr][newc]!=0&&a[newr][newc]<size) {
					if (d==1||(d>1&&v[newr][newc]<d)) d=v[newr][newc];
				}
				q.push(make_pair(newr, newc));
			}
		}
	}
	return d-1;
}

int main(void) {
	cin >> N;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cin >> a[i][j];
			if (a[i][j]==9) {
				shark.first=i;
				shark.second=j;
				a[i][j]=0;
			}
		}
	}
	ate=0;
	while(1) {
		int d=bfs();
		if (d==0) {
			cout << cnt << endl;
			return 0;
		}
		cnt+=d;
		a[fish.first][fish.second]=0;
		ate++;
		shark.first=fish.first;
		shark.second=fish.second;
		if (ate==size) {
			size++;
			ate=0;
		}
	}
}
