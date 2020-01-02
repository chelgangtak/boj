#include <iostream>
#include <vector>
using namespace std;

bool v[20]={false,};
int n, s[20][20], ans=10000;

int abs(int x) {
	if (x<0) return -x;
	else return x;
}

int diff() {
	vector<int> v1, v2;
	int sum1=0, sum2=0;
	for (int i=0; i<n; i++) {
		if (v[i]==true) v1.push_back(i);
		else v2.push_back(i);	
	}
	for (int i=0; i<n/2; i++) {
		for (int j=0; j<n/2; j++) {
			if (i==j) continue;
			sum1+=s[v1[i]][v1[j]];
			sum2+=s[v2[i]][v2[j]];
		}
	}
	return abs(sum1-sum2);
}

void com(int idx, int cnt) {
	if (cnt==0) {
		int tmp=diff();
		if (tmp<ans) ans=tmp;
		/*for (int i=0; i<n; i++) cout << v[i] << " ";
		cout << endl;*/
		return;
	}
	for (int i=idx; i<n; i++) {
		if (v[i]==true) continue;
		v[i]=true;
		com(i, cnt-1);
		v[i]=false;
	}
}

int main(void) {
	v[0]=true;
	cin >> n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> s[i][j];
	}
	com(1, n/2-1);
	cout << ans << endl;
	return 0;
}
