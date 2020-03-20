#include <iostream>
#include <queue>
using namespace std;

typedef struct {
	int r;
	int c;
	int d;
} Elem;

int N, v[50][50][2];
char a[50][50];
queue<Elem> q;
Elem E;

int check(int r, int c, int d, int m) {
	if (m==4) {
		for (int i=r-1; i<=r+1; i++) {
			for (int j=c-1; j<=c+1; j++) {
				if (i<0||i>=N||j<0||j>=N||a[i][j]=='1') return 0;
			}
		}
		return 1;
	}
	if (d==0) {
		for (int j=c-1; j<=c+1; j++) {
			if (r<0||r>=N||j<0||j>=N||a[r][j]=='1') return 0;
		}
	}
	else {
		for (int i=r-1; i<=r+1; i++) {
			if (c<0||c>=N||i<0||i>=N||a[i][c]=='1') return 0;
		}
	}
	return 1;
}

int bfs() {
	int dir[5][2]={{-1,0},{0,1},{1,0},{0,-1},{0,0}};
	while (!q.empty()) {
		int r=q.front().r;
		int c=q.front().c;
		int d=q.front().d;
		//cout << "r: " << r << ", c: " << c << ", d: " << d << endl;
		q.pop();
		for (int i=0; i<5; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			int newd=d;
			if (i==4) newd=1-d;
			if (check(newr, newc, newd, i)==0) continue;
			if (v[newr][newc][newd]!=0) continue;
			if (newr==E.r&&newc==E.c&&newd==E.d) return v[r][c][d];
			v[newr][newc][newd]=v[r][c][d]+1;
			q.push({newr, newc, newd});
		}
	}
	return 0;
}

int main(void) {
	int s=0, e=0, d;
	pair<int, int> start[3], end[3];

	cin >> N;
	getchar();
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cin >> a[i][j];
			if (a[i][j]=='B') start[s++]=make_pair(i, j);
			else if (a[i][j]=='E') end[e++]=make_pair(i, j);
		}
		getchar();
	}
	if (start[0].first==start[1].first) d=0;
	else d=1;
	v[start[1].first][start[1].second][d]=1;
	q.push({start[1].first, start[1].second, d});
	if (end[0].first==end[1].first) d=0;
	else d=1;
	E={end[1].first, end[1].second, d};
	cout << bfs() << endl;
	return 0;
}
