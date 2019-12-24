#include <stdio.h>

long int f(long int N) {
	if (N>=0) return N*(N+1)/2;
	else return N*(N-1)/2;
}

int main(void) {
	long int A, B, t;
	scanf("%ld %ld", &A, &B);
	if (A>B) {
		t=A;
		A=B;
		B=t;
	}
	if (A>0) printf("%ld\n", f(B)-f(A-1));
	else if (A==0) {
		if (B==0) printf("0\n");
		else printf("%ld\n", f(B));
	}
	else {
		if (B>0) printf("%ld\n", f(B)-f(A));
		else if (B==0) printf("%ld\n", (-1)*f(A));
		else printf("%ld\n", f(B+1)-f(A));
	}
	return 0;
}
