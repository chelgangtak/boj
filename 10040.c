#include <stdio.h>

int A[1000], B[1000], C[1000];

int main(void) {
	int N, M, ans, max;
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		scanf("%d", &A[i]);
		C[i]=0;
	}
	for (int i=0; i<M; i++) scanf("%d", &B[i]);
	for (int i=0; i<M; i++) {
		int n=0;
		while (A[n]>B[i]) n++;
		C[n]++;
	}
	for (int i=0; i<N; i++) {
		if (i==0) {
			max=C[i];
			ans=0;
		}
		else if (max<C[i]) {
			ans=i;
			max=C[i];
		}
	}
	printf("%d\n", ans+1);
	return 0;
}
