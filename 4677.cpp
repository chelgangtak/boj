#include <iostream>
#include <queue>
using namespace std;

int m, n, cnt;
char a[100][100];
bool v[100][100];
queue<pair<int, int>> q;

void bfs() {
	int dir[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
	while (!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		for (int i=0; i<8; i++) {
			int nr=r+dir[i][0];
			int nc=c+dir[i][1];
			if (nr<0||nr>=m||nc<0||nc>=n) continue;
			if (a[nr][nc]=='*'||v[nr][nc]==true) continue;
			v[nr][nc]=true;
			q.push(make_pair(nr, nc));
		}
	}
}

int main(void) {
	while(1) {
		cin >> m >> n;
		if (m+n==0) return 0;
		getchar();
		for (int i=0; i<m; i++) {
			for (int j=0; j<n; j++) {
				v[i][j]=false;
				cin >> a[i][j];
			}
			getchar();
		}
		cnt=0;
		for (int i=0; i<m; i++) {
			for (int j=0; j<n; j++) {
				if (a[i][j]=='*'||v[i][j]==true) continue;
				v[i][j]=true;
				q.push(make_pair(i, j));
				bfs();
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
