#include <stdio.h>

int main(void) {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a==0&&b==0&&c==0) return 0;
		if (b*b==a*c) {
			printf("GP %d\n", c/b*c);
		}
		else if (2*b==a+c) {
			printf("AP %d\n", 2*c-b);
		}
	}
}
