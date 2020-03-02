#include <stdio.h>

int main(void) {
	int T, n;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		printf("%lld\n", (long long)n*(n+1)*(2*n+1)/6);
	}
	return 0;
}
