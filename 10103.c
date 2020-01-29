#include <stdio.h>

int main(void) {
	int n, a, b, c=100, d=100;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		if (a<b) c-=b;
		else if (a>b) d-=a;
	}
	printf("%d\n%d\n", c, d);
	return 0;
}
