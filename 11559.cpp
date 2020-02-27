#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>> q;
char a[12][6];
int ans=0, flag;

void bfs(int x, int y) {
	int v[12][6]={{0,},}, dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}}, cnt=1;
	v[x][y]=1;
	q.push(make_pair(x, y));
	while(!q.empty()) {
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=12||newc<0||newc>=6) continue;
			if (a[newr][newc]!=a[x][y]||v[newr][newc]!=0) continue;
			v[newr][newc]=1;
			q.push(make_pair(newr, newc));
			cnt++;
		}
	}
	if (cnt>=4) {
		for (int i=0; i<12; i++) {
			for (int j=0; j<6; j++) {
				if (v[i][j]==1) a[i][j]='.';
			}
		}
		flag=1;
	}
}

void fall() {
	for (int j=0; j<6; j++) {
		for (int i=11; i>=0; i--) {
			if (a[i][j]!='.') continue;
			int k=i;
			while(k>=0&&a[k][j]=='.') k--;
			if (k>=0) {
				a[i][j]=a[k][j];
				a[k][j]='.';
			}
		}
	}
}

int main(void) {
	for (int i=0; i<12; i++) {
		for (int j=0; j<6; j++) scanf("%c", &a[i][j]);
		getchar();
	}
	while(1) {
		flag=0;
		for (int i=0; i<12; i++) {
			for (int j=0; j<6; j++) {
				if (a[i][j]=='.') continue;
				bfs(i, j);
			}
		}
		if (flag==1) {
			ans++;
			fall();
		}
		else {
			cout << ans << endl;
			return 0;
		}
	}
}
