#include <stdio.h>

int main(void) {
	int T, n;
	double minx, maxx, miny, maxy, x, y;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		for (int i=0; i<n; i++) {
			scanf("%lf %lf", &x, &y);
			if (i==0) {
				minx=x;
				maxx=x;
				miny=y;
				maxy=y;
			}
			else {
				if (x<minx) minx=x;
				if (x>maxx) maxx=x;
				if (y<miny) miny=y;
				if (y>maxy) maxy=y;
			}
		}
		printf("Case %d: Area %lf, Perimeter %lf\n", t+1, (maxx-minx)*(maxy-miny), 2*(maxx-minx+maxy-miny));
	}
}
