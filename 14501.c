#include <stdio.h>

int N, T[15], P[15], v[15]={0,}, max=0;

void f(int idx) {
	if (idx>N) return;
	if (idx==N) {
		int sum=0;
		for (int i=0; i<N; i++) {
			if (v[i]==1) sum+=P[i];
		}
		if (sum>max) max=sum;
		return;
	}
	v[idx]=1;
	f(idx+T[idx]);
	v[idx]=0;
	f(idx+1);
}

int main(void) {
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%d %d", &T[i], &P[i]);
	f(0);
	printf("%d\n", max);
	return 0;
}
