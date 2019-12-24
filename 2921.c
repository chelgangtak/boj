#include <stdio.h>

int main(void) {
	long int N;
	scanf("%ld", &N);
	printf("%ld\n", N*(N+1)*(N+2)/2);
	return 0;
}
