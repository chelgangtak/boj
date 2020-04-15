#include <iostream>
#include <queue>
using namespace std;

typedef struct {
	int r;
	int c;
	int d;
} Node;

int N, ans=0;
bool a[16][16];
queue<Node> q;

int check(int r, int c, int *newr, int *newc, int d) {
	if (d==0) {
		if (c+1>=N||a[r][c+1]==1) return 0;
		*newr=r;
		*newc=c+1;
	}
	else if (d==1) {
		if (c+1>=N||r+1>=N||a[r][c+1]==1||a[r+1][c]==1||a[r+1][c+1]==1) return 0;
		*newr=r+1;
		*newc=c+1;
	}
	else {
		if (r+1>=N||a[r+1][c]==1) return 0;
		*newr=r+1;
		*newc=c;
	}
	return 1;
}

void bfs() {
	while(!q.empty()) {
		int r=q.front().r;
		int c=q.front().c;
		int d=q.front().d;
		q.pop();
		if (r==N-1&&c==N-1) {
			ans++;
			continue;
		}
		int newr, newc;
		for (int i=0; i<=2; i++) {
			if ((d==0&&i==2)||(d==2&&i==0)) continue;
			if (check(r, c, &newr, &newc, i)==0) continue;
			q.push({newr, newc, i});
		}
	}
}

int main(void) {
	cin >> N;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cin >> a[i][j];
		}
	}
	q.push({0,1,0});
	bfs();
	cout << ans << endl;
	return 0;
}
