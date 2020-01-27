#include <stdio.h>

int f(int X, int Y, int Z) {
	if (Z%(X+Y)>0&&Z%(X+Y)<=X) return 1;
	else return 0;
}

int main(void) {
	int A, B, C, D, P, M, N, p, m, n;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	scanf("%d %d %d", &P, &M, &N);
	printf("%d\n%d\n%d\n", f(A, B, P)+f(C, D, P), f(A, B, M)+f(C, D, M), f(A, B, N)+f(C, D, N));
	return 0;
}
