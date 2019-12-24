#include <stdio.h>
#include <math.h>

int main(void) {
	double H, V;
	scanf("%lf %lf", &H, &V);
	double a=sqrt(H*H+V*V);
	double b=(V*V-(a-H)*(a-H))/(2*V);
	double c=sqrt(b*b+H*H);
	double d=(V-b)*H/c;
	printf("%.2lf %.2lf\n", c/2, d);
	return 0;
}
