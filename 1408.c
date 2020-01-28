#include <stdio.h>

int main(void) {
	int a, b, c, d, e;
	scanf("%d:%d:%d", &a, &b, &c);
	d=a*3600+b*60+c;
	scanf("%d:%d:%d", &a, &b, &c);
	e=a*3600+b*60+c;
	if (e<d) e+=24*3600;
	e-=d;
	printf("%02d:%02d:%02d\n", e/3600, e%3600/60, e%60);
	return 0;
}
