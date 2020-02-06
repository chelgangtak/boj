#include <stdio.h>

int main(void) {
	int T, C, Q, D, N, P;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &C);
		Q=C/25;
		C=C%25;
		D=C/10;
		C=C%10;
		N=C/5;
		C=C%5;
		P=C;
		printf("%d %d %d %d\n", Q, D, N, P);
	}
	return 0;
}
