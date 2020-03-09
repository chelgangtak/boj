#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c, d;
	scanf("%lf %lf %lf", &a, &b, &c);
	d=sqrt(b*b+c*c);
	printf("%d %d\n", (int)(a*b/d), (int)(a*c/d));
	return 0;
}
