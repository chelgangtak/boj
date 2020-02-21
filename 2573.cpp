#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int N, M, a[300][300], b[300][300], v[300][300], tot=0;
int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
queue<pair<int, int>> q;

int bfs() {
	int cnt=0;
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		cnt++;
		q.pop();
		for (int d=0; d<4; d++) {
			int newr=r+dir[d][0];
			int newc=c+dir[d][1];
			if (newr<0||newr>=N||newc<0||newc>=M) continue;
			if (b[newr][newc]==0||v[newr][newc]==1) continue;
			v[newr][newc]=1;
			q.push(make_pair(newr, newc));
		}
	}
	return cnt;
}

int main(void) {
	cin >> N >> M;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> a[i][j];
			if (a[i][j]!=0) tot++;
		}
	}
	for (int t=1; ; t++) {
		for (int i=0; i<N; i++) {
			for (int j=0; j<M; j++) {
				v[i][j]=0;
				if (a[i][j]==0) {
					b[i][j]=0;
					continue;
				}
				b[i][j]=a[i][j];
				for (int d=0; d<4; d++) {
					int r=i+dir[d][0];
					int c=j+dir[d][1];
					if (r<0||r>=N||c<0||c>=M) continue;
					if (a[r][c]==0) b[i][j]--;
				}
				if (b[i][j]<=0) {
					b[i][j]=0;
					tot--;
				}
			}
		}
		if (tot==0) {
			cout << "0" << endl;
			return 0;
		}
		int cnt=0;
		for (int i=0; i<N; i++) {
			for (int j=0; j<M; j++) {
				a[i][j]=b[i][j];
				if (b[i][j]!=0&&v[i][j]==0) {
					v[i][j]=1;
					q.push(make_pair(i, j));
					cnt=bfs();
					if (cnt!=tot) {
						cout << t << endl;
						return 0;
					}	
				}
			}
		}
	}
}
