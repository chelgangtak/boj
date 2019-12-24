#include <stdio.h>

int main(void) {
	long int A, B, C;
	long int q, r;
	scanf("%ld %ld %ld", &A, &B, &C);
	if (C<=B) {
		printf("-1\n");
		return 0;
	}
	q=A/(C-B);
	r=A%(C-B);
	printf("%ld\n", q+1);
	return 0;
}
