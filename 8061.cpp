#include <iostream>
#include <queue>
using namespace std;

int n, m, v[182][182];
char a[182][182];
queue<pair<int, int>> q;

void bfs() {
	int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	while (!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=n||newc<0||newc>=m) continue;
			if (a[newr][newc]=='1'||v[newr][newc]!=0) continue;
			v[newr][newc]=v[r][c]+1;
			q.push(make_pair(newr, newc));
		}
	}
}

int main(void) {
	cin >> n >> m;
	getchar();
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> a[i][j];
			if (a[i][j]=='1') {
				v[i][j]=1;
				q.push(make_pair(i, j));
			}
		}
		getchar();	
	}
	bfs();
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) printf("%d ", v[i][j]-1);
		printf("\n");
	}
	return 0;
}
