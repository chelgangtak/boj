#include <stdio.h>

int main(void) {
	double x;
	while(1) {
		scanf("%lf", &x);
		if (x==0.0) return 0;
		printf("%.2lf English miles equals %.2lf Roman miles or %.0lf paces.\n", x, x*5280/4854, x*5280/4854*1000);
	}
}
