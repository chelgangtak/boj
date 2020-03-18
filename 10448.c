#include <stdio.h>

int A[46], ans;

void f(int idx, int N, int lev) {
	if (lev>3||ans==3) return;
	if (N==0) {
		if (lev>ans) ans=lev;
		return;
	}
	for (int i=idx; i>=1; i--) {
		if (N-A[i]<0) continue;
		f(i, N-A[i], lev+1);
	}
}

int main(void) {
	int T;
	for (int i=1; i<=45; i++) A[i]=i*(i+1)/2;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int K;
		ans=0;
		scanf("%d", &K);
		int idx=1;
		while (A[idx]<K) idx++;
		idx--;
		f(idx, K, 0);
		printf("%d\n", ans==3);
	}
	return 0;
}
