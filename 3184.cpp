#include <iostream>
#include <queue>
using namespace std;

int R, C, sheep=0, wolf=0;
char a[250][250];
bool v[250][250]={{0,},};
queue<pair<int, int>> q;

void bfs() {
	int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}}, s=0, w=0;
	while (!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		if (a[r][c]=='o') s++;
		if (a[r][c]=='v') w++;
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=R||newc<0||newc>=C) continue;
			if (a[newr][newc]=='#'||v[newr][newc]==true) continue;
			v[newr][newc]=true;
			q.push(make_pair(newr, newc));
		}
	}
	if (s>w) wolf-=w;
	else sheep-=s;
}

int main(void) {
	cin >> R >> C;
	getchar();
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			cin >> a[i][j];
			if (a[i][j]=='o') sheep++;
			if (a[i][j]=='v') wolf++;
		}
		getchar();
	}
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			if (a[i][j]!='#'&&v[i][j]==false) {
				v[i][j]=true;
				q.push(make_pair(i, j));
				bfs();
			}
		}
	}
	cout << sheep << " " << wolf << endl;
	return 0;
}
