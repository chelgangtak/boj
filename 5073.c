#include <stdio.h>

void swap(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
}

int main(void) {
	int a, b, c;
	while(1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a+b+c==0) return 0;
		if (a>b) swap(&a, &b);
		if (b>c) swap(&b, &c);
		if (a>b) swap(&a, &b);
		if (a+b<=c) printf("Invalid\n");
		else if (a==b||b==c) {
			if (a==c) printf("Equilateral\n");
			else printf("Isosceles\n");
		}
		else printf("Scalene\n");
	}
}
