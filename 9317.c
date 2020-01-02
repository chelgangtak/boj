#include <stdio.h>
#include <math.h>

double f(double x) {
	if ((int)(x*1000)%10>=5) return ((int)(x*100)+1)/100.0;
	else return ((int)(x*100))/100.0;
}

int main(void) {
	double d, h, v, dpih, dpiv;
	while(1) {
		scanf("%lf %lf %lf", &d, &h, &v);
		if (d==0&&h==0&&v==0) return 0;
		dpih=h*sqrt(337)/16/d;
		dpiv=v*sqrt(337)/9/d;
		printf("Horizontal DPI: %.2lf\n", f(dpih));
		printf("Vertical DPI: %.2lf\n", f(dpiv));
	}
}
