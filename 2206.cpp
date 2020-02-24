#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int N, M, ans, a[1000][1000], v[1000][1000][2]={{{0,0},},};

typedef struct {
	int r, c, b;
} Element;
queue<Element> q;

int bfs() {
	int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	v[0][0][0]=1;
	q.push({0,0,0});
	while(!q.empty()) {
		int r=q.front().r;
		int c=q.front().c;
		int b=q.front().b;
		//cout << "r: " << r << ", c: " << c << ", v: " << v[r][c][b] << ", b: " << b << endl;
		q.pop();
		if (r==N-1&&c==M-1) return v[r][c][b];
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=N||newc<0||newc>=M) continue;
			if (v[newr][newc][b]!=0) continue;
			if (a[newr][newc]==0) {
				v[newr][newc][b]=v[r][c][b]+1;
				q.push({newr, newc, b});
			}
			if (a[newr][newc]==1&&b==0) {
				v[newr][newc][1]=v[r][c][b]+1;
				q.push({newr, newc, 1});
			}
		}
	}
	return -1;
}

int main(void) {
	cin >> N >> M;
	getchar();
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			char c;
			cin >> c;
			a[i][j]=c-'0';
		}
		getchar();
	}

	ans=bfs();
	cout << ans << endl;
}
