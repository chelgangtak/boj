#include <stdio.h>

int main(void) {
	int P, K, N;
	scanf("%d", &P);
	for (int p=0; p<P; p++) {
		scanf("%d %d", &K, &N);
		printf("%d %d %d %d\n", K, N*(N+1)/2, N*N, N*(N+1));
	}
	return 0;
}
