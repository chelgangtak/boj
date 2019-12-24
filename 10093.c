#include <stdio.h>

int main(void) {
	long int A, B, t;
	scanf("%ld %ld", &A, &B);
	if (A>B) {
		t=A;
		A=B;
		B=t;
	}
	if (B-A-1>0) printf("%ld\n", B-A-1);
	else {
		printf("0\n");
		return 0;
	}
	for (long int i=A+1; i<B; i++) printf("%ld ", i);
	printf("\n");
	return 0;
}
