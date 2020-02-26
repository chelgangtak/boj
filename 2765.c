#include <stdio.h>

int main(void) {
	double d, s;
	int n;
	for (int t=1; ; t++) {
		scanf("%lf %d %lf", &d, &n, &s);
		if (n==0) return 0;
		double dist=d*3.141592*n/63360;
		double v=dist/(s/3600);
		printf("Trip #%d: ", t);
		printf("%.2lf %.2lf\n", dist, v);
	}
}
