#include <stdio.h>

int main(void) {
	long int N, ans;
	scanf("%ld", &N);
	ans=(N+1)*N*(N-1)/2;
	printf("%ld\n", ans);
	return 0;
}
