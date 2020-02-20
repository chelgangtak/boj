#include <stdio.h>

void swap(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
}

int main(void) {
	int T, a, b, c;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d %d", &a, &b, &c);
		printf("Case #%d: ", t+1);
		if (a>b) swap(&a, &b);
		if (b>c) swap(&b, &c);
		if (a>b) swap(&a, &b);
		if (a+b<=c) printf("invalid!\n");
		else if (a==b||b==c) {
			if (a==c) printf("equilateral\n");
			else printf("isosceles\n");
		}
		else printf("scalene\n");
	}
	return 0;
}
