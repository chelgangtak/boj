#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int A[50][50], v[50][50], pop[2500];
int N, L, R, unum, cnt, sum, ans=0;
queue<pair<int, int>> q;

void bfs() {
	int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		cnt++;
		sum+=A[r][c];
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=N) continue;
			if (newc<0||newc>=N) continue;
			if (v[newr][newc]!=0) continue;
			int diff=abs(A[r][c]-A[newr][newc]);
			if (diff>=L&&diff<=R) {
				v[newr][newc]=unum;
				q.push(make_pair(newr, newc));
			}
		}
	}
}

int main(void) {
	cin >> N >> L >> R;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) cin >> A[i][j];
	}
	while(1) {
		unum=1;
		for (int i=0; i<N; i++) {
			for (int j=0; j<N; j++) {
				if (v[i][j]!=0) continue;
				v[i][j]=unum;
				q.push(make_pair(i, j));
				cnt=0;
				sum=0;
				bfs();
				pop[unum]=sum/cnt;
				unum++;
			}
		}
		if (unum-1==N*N) break;
		for (int i=0; i<N; i++) {
			for (int j=0; j<N; j++) {
				A[i][j]=pop[v[i][j]];
				v[i][j]=0;
			}
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}
