#include <stdio.h>

int main(void) {
	int a, b, n, c, ans=0;
	scanf("%d %d %d", &a, &b, &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &c);
		if (c>=a&&c<=b) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
