#include <stdio.h>

int main(void) {
	long long int R, C, N, a, b;
	scanf("%lld %lld %lld", &R, &C, &N);
	if (R%N==0) a=R/N;
	else a=R/N+1;
	if (C%N==0) b=C/N;
	else b=C/N+1;
	printf("%lld\n", a*b);
	return 0;
}
