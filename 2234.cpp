#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int m, n, a[50][50], cnt=0, Max=0, Max2=0;
int dir[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
bool v[50][50]={{0,},};
queue<pair<int, int>> q;

int bfs() {
	int sum=0;
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		sum++;
		q.pop();
		int t=a[r][c];
		for (int i=0; i<4; i++) {
			if (t%2==1) {
				t/=2;
				continue;
			}
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (v[newr][newc]==false) {
				v[newr][newc]=true;
				q.push(make_pair(newr, newc));
			}
			t/=2;
		}
	}
	return sum;
}

int bfs2(int i, int j) {
	int t=a[i][j], sum, summax=0;
	for (int k=1; k<=8; k*=2) {
		if (t/k%2==0) continue;
		a[i][j]=t-k;
		bool v[50][50]={{0,},};
		sum=0;
		v[i][j]=true;
		q.push(make_pair(i, j));
		while(!q.empty()) {
			int r=q.front().first;
			int c=q.front().second;
			sum++;
			q.pop();
			int tmp=a[r][c];
			for (int i=0; i<4; i++) {
				if (tmp%2==1) {
					tmp/=2;
					continue;
				}
				int newr=r+dir[i][0];
				int newc=c+dir[i][1];
				if (newr<0||newr>=m||newc<0||newc>=n) continue;
				if (v[newr][newc]==false) {
					v[newr][newc]=true;
					q.push(make_pair(newr, newc));
				}
				tmp/=2;
			}
		}
		if (sum>summax) summax=sum;
	}
	a[i][j]=t;
	return summax;
}

int main(void) {
	cin >> n >> m;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) cin >> a[i][j];
	}
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			if (v[i][j]==false) {
				v[i][j]=true;
				q.push(make_pair(i, j));
				int tmp=bfs();
				if (tmp>Max) Max=tmp;
				cnt++;
			}
		}
	}
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			int tmp=bfs2(i, j);
			if (tmp>Max2) Max2=tmp;
		}
	}
	cout << cnt << endl << Max << endl << Max2 << endl;
	return 0;
}
