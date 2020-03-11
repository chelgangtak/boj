#include <iostream>
#include <vector>
using namespace std;

int a[10][10], cnt[6]={0,}, ans=26;
vector<pair<int, int>> v;

int check(int r, int c, int k) {
	for (int i=0; i<k; i++) {
		for (int j=0; j<k; j++) {
			if (i+r>=10||j+c>=10) return 0;
			if (a[r+i][c+j]!=1) return 0;
		}
	}
	return 1;
}

void coloring(int r, int c, int k, int color) {
	for (int i=0; i<k; i++) {
		for (int j=0; j<k; j++) a[r+i][c+j]=color;
	}
}

void dfs(int pnum, int colored) {
	if (colored==v.size()) {
		if (pnum<ans) ans=pnum;
		return;
	}
	if (pnum>=ans) return;
	for (int i=0; i<v.size(); i++) {
		int r=v[i].first;
		int c=v[i].second;
		if (a[r][c]!=1) continue;
		for (int k=5; k>0; k--) {
			if (cnt[k]==5) continue;
			if (check(r, c, k)==0) continue;
			coloring(r, c, k, 2);
			cnt[k]++;
			dfs(pnum+1, colored+k*k);
			coloring(r, c, k, 1);
			cnt[k]--;
		}
		return;
	}
}

int main(void) {
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			cin >> a[i][j];
			if (a[i][j]==1) v.push_back(make_pair(i, j)); 
		}
	}
	dfs(0, 0);
	if (ans==26) cout << "-1" << endl;
	else cout << ans << endl;
	return 0;
}