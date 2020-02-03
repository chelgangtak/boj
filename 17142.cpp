#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

int N, M, a[50][50], tot=0, vnum, co[10]={0,}, ans, first=0;
vector<pair<int, int>> virus;

int bfs() {
	queue<pair<int, int>> q;
	int r, c, v[50][50]={{0,},0}, dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}}, cnt=0;
	for (int i=0; i<vnum; i++) {
		if (co[i]==1) {
			v[virus[i].first][virus[i].second]=1;
			q.push(make_pair(virus[i].first, virus[i].second));
		}
	}
	while(!q.empty()) {
		r=q.front().first;
		c=q.front().second;
		q.pop();
		for (int i=0; i<4; i++) {
			int newr=r+dir[i][0];
			int newc=c+dir[i][1];
			if (newr<0||newr>=N||newc<0||newc>=N) continue;
			if (a[newr][newc]==1) continue;
			if (v[newr][newc]>0) continue;
			v[newr][newc]=v[r][c]+1;
			if (a[newr][newc]==0) cnt++;
			if (cnt==tot) return v[newr][newc]-1;
			q.push(make_pair(newr, newc));
		}
	}
	return -1;
}

void com(int idx, int r) {
	if (r==0) {
		int min=bfs();
		if (first==0) {
			ans=min;
			first=1;
		}
		else {
			if (ans==-1) ans=min;
			else if (min!=-1&&min<ans) ans=min;
		}
	}
	else if (idx==vnum) return;
	else {
		co[idx]=1;
		com(idx+1, r-1);
		co[idx]=0;
		com(idx+1, r);
	}
}

int main(void) {
	cin >> N >> M;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cin >> a[i][j];
			if (a[i][j]==0) tot++;
			else if (a[i][j]==2) virus.push_back(make_pair(i, j));
		}
	}
	if (tot==0) {
		cout << "0" << endl;
		return 0;
	}
	vnum=virus.size();
	com(0, M);
	cout << ans << endl;
	return 0;
}
