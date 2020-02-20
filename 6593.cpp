#include <iostream>
#include <queue>

typedef struct {
	int lev, row, col;
} Pos;

using namespace std;
int L, R, C, v[30][30][30];
char a[30][30][30];

queue<Pos> q;

int bfs() {
	int dir[6][3]={{1,0,0}, {-1,0,0}, {0,-1,0}, {0,1,0}, {0,0,-1}, {0,0,1}};
	while(!q.empty()) {
		int l=q.front().lev;
		int r=q.front().row;
		int c=q.front().col;
		if (a[l][r][c]=='E') return v[l][r][c]-1;
		q.pop();
		for (int i=0; i<6; i++) {
			int newl=l+dir[i][0];
			int newr=r+dir[i][1];
			int newc=c+dir[i][2];
			if (newl<0||newl>=L||newr<0||newr>=R||newc<0||newc>=C) continue;
			if (a[newl][newr][newc]=='#'||v[newl][newr][newc]!=0) continue;
			v[newl][newr][newc]=v[l][r][c]+1;
			q.push({newl, newr, newc});
		}
	}
	return -1;
}

int main(void) {
	while(1) {
		cin >> L >> R >> C;
		if (L+R+C==0) return 0;
		getchar();
		while(!q.empty()) q.pop();
		for (int l=0; l<L; l++) {
			for (int i=0; i<R; i++) {
				for (int j=0; j<C; j++) {
					v[l][i][j]=0;
					cin >> a[l][i][j];
					if (a[l][i][j]=='S') {
						v[l][i][j]=1;
						q.push({l, i, j});
					}
				}
				getchar();
			}
			getchar();
		}
		int t=bfs();
		if (t==-1) cout << "Trapped!" << endl;
		else cout << "Escaped in " << t << " minute(s)." << endl;
	}
}
