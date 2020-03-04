#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d\n", (a-1)/b*c*d);
	return 0;
}
