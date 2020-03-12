#include <iostream>
#include <map>
using namespace std;

map<int, pair<int, int>> m;
bool v[5][5]={{0,},};

int check() {
	int tmp=0;
	for (int i=0; i<5; i++) {
		int f=0;
		for (int j=0; j<5; j++) {
			if (v[i][j]==false) {
				f=1;
				break;
			}
		}
		if (f==0) tmp++;
	}
	for (int j=0; j<5; j++) {
		int f=0;
		for (int i=0; i<5; i++) {
			if (v[i][j]==false) {
				f=1;
				break;
			}
		}
		if (f==0) tmp++;
	}
	int f=0;
	for (int i=0; i<5; i++) {
		if (v[i][i]==false) {
			f=1;
			break;
		}
	}
	if (f==0) tmp++;
	f=0;
	for (int i=0; i<5; i++) {
		if (v[i][4-i]==false) {
			f=1;
			break;
		}
	}
	if (f==0) tmp++;
	return tmp;
}

int main(void) {
	int cnt=0, ans;
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			int a;
			cin >> a;
			m[a]=make_pair(i, j);
		}
	}
	for (int i=0; i<25; i++) {
		int a;
		cin >> a;
		if (cnt>=3) continue;
		v[m[a].first][m[a].second]=true;
		cnt=check();
		if (cnt>=3) ans=i+1;
	}
	cout << ans << endl;
	return 0;
}
