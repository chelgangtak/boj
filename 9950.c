#include <stdio.h>

int main(void) {
	int a, b, c;
	while(1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a+b+c==0) return 0;
		if (a==0) printf("%d %d %d\n", c/b, b, c);
		else if (b==0) printf("%d %d %d\n", a, c/a, c);
		else if (c==0) printf("%d %d %d\n", a, b, a*b);
	}
}
