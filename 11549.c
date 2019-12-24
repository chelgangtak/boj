#include <stdio.h>

int main(void) {
	int a, b, ans=0;
	scanf("%d", &a);
	for (int i=0; i<5; i++) {
		scanf("%d", &b);
		if (a==b) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
