#include <stdio.h>

int main(void) {
	int n, ans=0;
	scanf("%d", &n);
	for (int i=1; i*i<=n; i++) {
		ans+=n/i-(i-1);
	}
	printf("%d\n", ans);
	return 0;
}
