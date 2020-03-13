#include <iostream>
#include <queue>
using namespace std;

int R, C, wolf, sheep, dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
bool v[250][250]={{0,},};
char a[250][250];
queue<pair<int, int>> q;

void bfs() {
	int tmpw=0, tmps=0;
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		if (a[r][c]=='v') tmpw++;
		else if (a[r][c]=='k') tmps++;
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=R||newc<0||newc>=C) continue;
			if (a[newr][newc]=='#'||v[newr][newc]!=0) continue;
			v[newr][newc]=true;
			q.push(make_pair(newr, newc));
		}
	}
	if (tmps>tmpw) wolf-=tmpw;
	else sheep-=tmps;	
}

int main(void) {
	cin >> R >> C;
	getchar();
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			cin >> a[i][j];
			if (a[i][j]=='v') wolf++;
			else if (a[i][j]=='k') sheep++;
		}
		getchar();
	}
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			if (a[i][j]=='#'||v[i][j]!=0) continue;
			v[i][j]=true;
			q.push(make_pair(i, j));
			bfs();
		}
	}
	cout << sheep << " " << wolf << endl;
}
