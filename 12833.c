#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	C=C%2;
	for (int i=1; i<=C; i++) {
		A=A^B;
	}
	printf("%d\n", A);
	return 0;
}
