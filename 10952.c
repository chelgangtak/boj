#include <stdio.h>

int main(void) {
	int A, B;

	do {
		scanf("%d %d", &A, &B);
		if (A==0 && B==0) break;
		printf("%d\n", A+B);
	} while(1);
	return 0;
}
