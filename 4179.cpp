#include <iostream>
#include <queue>
using namespace std;

typedef struct {
	pair<int, int> p;
	char ch;
} Elem;

int R, C;
char a[1000][1000];
int v[1000][1000]={{0,},};
queue<Elem> q;

int bfs() {
	int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	while (!q.empty()) {
		int r=q.front().p.first;
		int c=q.front().p.second;
		char ch=q.front().ch;
		q.pop();
		if (ch=='F') {
			for (int i=0; i<4; i++) {
				int newr=r+dir[i][0];
				int newc=c+dir[i][1];
				if (newr<0||newr>=R||newc<0||newc>=C) continue;
				if (a[newr][newc]=='#'||a[newr][newc]=='F') continue;
				a[newr][newc]='F';
				q.push({make_pair(newr, newc), 'F'});
			}
		}
		else {
			for (int i=0; i<4; i++) {
				int newr=r+dir[i][0];
				int newc=c+dir[i][1];
				if (newr<0||newr>=R||newc<0||newc>=C) return v[r][c];
				if (a[newr][newc]=='#'||a[newr][newc]=='F'||v[newr][newc]!=0) continue;
				v[newr][newc]=v[r][c]+1;
				q.push({make_pair(newr, newc), 'J'});
			}
		}
	}
	return 0;
}

int main(void) {
	pair<int, int> start;
	cin >> R >> C;
	getchar();
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			cin >> a[i][j];
			if (a[i][j]=='J') start=make_pair(i, j);
			else if (a[i][j]=='F') q.push({make_pair(i, j), 'F'});
		}
		getchar();
	}
	v[start.first][start.second]=1;
	q.push({start, 'J'});
	int ans=bfs();
	if (ans>0) cout << ans << endl;
	else cout << "IMPOSSIBLE" << endl;
	return 0;
}
