#include <iostream>
using namespace std;
#include <vector>

int check(int n) {
	vector<int> v;
	int tmp=n;
	while (tmp>0) {
		int r=tmp%10;
		for (int i=0; i<v.size(); i++) {
			if (r==v[i]) return -1;
		}
		v.push_back(r);
		tmp/=10;
	}
	return 1;
}

int main(void) {
	int N, M, cnt;
	while (1) {
		int r=scanf("%d %d", &N, &M);
		if (r==EOF) return 0;
		cnt=0;
		for (int i=N; i<=M; i++) {
			if (check(i)==1) cnt++;
		}
		printf("%d\n", cnt);
	}
}
