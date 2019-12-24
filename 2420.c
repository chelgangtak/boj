#include <stdio.h>

int main(void) {
	long int N, M, t;
	scanf("%ld %ld", &N, &M);
	if (N>M) {
		t=N;
		N=M;
		M=t;
	}
	printf("%ld\n", M-N);
	return 0;
}
