#include <stdio.h>

int main(void) {
	int N, M, A, B, K;
	scanf("%d %d", &N, &M);
	scanf("%d %d", &A, &B);
	for (int i=0; i<M; i++) {
		scanf("%d", &K);
		if (A<=K) {
			int t=A;
			A=B;
			B=t;
		}
	}
	printf("%d\n", A);
	return 0;
}
