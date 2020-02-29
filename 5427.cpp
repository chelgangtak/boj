#include <iostream>
#include <queue>
using namespace std;

typedef struct {
	int row;
	int col;
	int time;
	char ch;
} Element;

int w, h;
char a[1000][1000];
Element start;
queue<Element> q;

int bfs() {
	int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	while(!q.empty()) {
		int r=q.front().row;
		int c=q.front().col;
		int t=q.front().time;
		char ch=q.front().ch;
		q.pop();
		if (ch=='*') {
			for (int i=0; i<4; i++) {
				int newr=r+dir[i][0];
				int newc=c+dir[i][1];
				if (newr<0||newr>=h||newc<0||newc>=w) continue;
				if (a[newr][newc]=='#'||a[newr][newc]=='*') continue;
				a[newr][newc]='*';
				q.push({newr, newc, t+1, '*'});
			}
		}
		else {
			for (int i=0; i<4; i++) {
				int newr=r+dir[i][0];
				int newc=c+dir[i][1];
				if (newr<0||newr>=h||newc<0||newc>=w) return t;
				if (a[newr][newc]!='.') continue;
				a[newr][newc]='@';
				q.push({newr, newc, t+1, '@'});
			}
		}
	}
	return 0;
}

int main(void) {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		while (!q.empty()) q.pop();
		cin >> w >> h;
		getchar();
		for (int i=0; i<h; i++) {
			for (int j=0; j<w; j++) {
				cin >> a[i][j];
				if (a[i][j]=='@') start={i, j, 1, '@'};
				if (a[i][j]=='*') q.push({i, j, 1, '*'});
			}
			getchar();
		}
		q.push(start);
		int time=bfs();
		if (time>0) cout << time << endl;
		else cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
