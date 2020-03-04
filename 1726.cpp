#include <iostream>
#include <queue>
using namespace std;

typedef struct {
	int r;
	int c;
	int d;
} Element;

int M, N, v[100][100][4]={{{0,},},};
bool a[100][100]={{0,},};
Element Start, End;
queue<Element> q;

void bfs() {
	int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}}, right[4]={2, 3, 1, 0}, left[4]={3, 2, 0, 1};
	while(!q.empty()) {
		int r=q.front().r;
		int c=q.front().c;
		int d=q.front().d;
		if (r==End.r&&c==End.c&&d==End.d) {
			cout << v[r][c][d]-1 << endl;
			return;
		}
		q.pop();
		int newr=r;
		int newc=c;
		for (int i=1; i<=3; i++) {
			newr=newr+dir[d][0];
			newc=newc+dir[d][1];
			if (newr<0||newr>=M||newc<0||newc>=N||a[newr][newc]==true) break;
			if (v[newr][newc][d]!=0) continue;
			v[newr][newc][d]=v[r][c][d]+1;
			q.push({newr, newc, d});
		}
		int dr=right[d];
		if (v[r][c][dr]!=0) continue;
		v[r][c][dr]=v[r][c][d]+1;
		q.push({r, c, dr});
		int dl=left[d];
		if (v[r][c][dl]!=0) continue;
		v[r][c][dl]=v[r][c][d]+1;
		q.push({r, c, dl});
	}
}

int main(void) {
	cin >> M >> N;
	for (int i=0; i<M; i++) {
		for (int j=0; j<N; j++) cin >> a[i][j];
	}
	cin >> Start.r >> Start.c >> Start.d;
	cin >> End.r >> End.c >> End.d;
	Start.r--;
	Start.c--;
	Start.d--;
	End.r--;
	End.c--;
	End.d--;
	v[Start.r][Start.c][Start.d]=1;
	q.push(Start);
	bfs();
	return 0;
}
