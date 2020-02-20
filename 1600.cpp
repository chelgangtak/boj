#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int K, W, H, a[200][200], v[200][200], h[200][200];
queue<pair<int, int>> q;

int bfs() {
	int dir[12][4]={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1},{-1,0},{0,1},{1,0},{0,-1}};
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		if (r==H-1&&c==W-1) return v[r][c]-1;
		q.pop();
		for (int i=0; i<12; i++) {
			if (i<8&&h[r][c]>=K) continue;
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=H||newc<0||newc>=W) continue;
			if (a[newr][newc]==1||(v[newr][newc]!=0&&h[newr][newc]<=h[r][c]+(i<8))) continue;
			v[newr][newc]=v[r][c]+1;
			if (i<8) h[newr][newc]=h[r][c]+1;
			else h[newr][newc]=h[r][c];
			q.push(make_pair(newr, newc));
		}
	}
	return -1;
}

int main(void) {
	cin >> K;
	cin >> W >>	H;
	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			v[i][j]=0;
			h[i][j]=0;
			cin >> a[i][j];
		}
	}
	v[0][0]=1;
	q.push(make_pair(0, 0));
	cout << bfs() << endl;
	return 0;
}
