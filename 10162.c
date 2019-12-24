#include <stdio.h>

int main(void) {
	int T, a, b, c;
	scanf("%d", &T);
	a=T/300;
	T=T%300;
	b=T/60;
	T=T%60;
	c=T/10;
	T=T%10;
	if (T!=0) printf("-1\n");
	else printf("%d %d %d\n", a, b, c);
	return 0;
}
