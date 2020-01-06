#include <stdio.h>

int main(void) {
	int T, N;
	scanf("%d", &T);
	for (int i=0; i<T; i++) {
		scanf("%d", &N);
		printf("%d %d %d\n", N*(N+1)/2, N*N, N*(N+1));
	}
	return 0;
}
