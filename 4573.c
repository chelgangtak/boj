#include <stdio.h>

int main(void) {
	int n, k=1;
	double d, p, min, ans;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		for (int i=0; i<n; i++) {
			scanf("%lf %lf", &d, &p);
			if (i==0) {
				min=p/(d*d);
				ans=d;
			}
			else if (p/(d*d)<min) {
				min=p/(d*d);
				ans=d;
			}
		}
		printf("Menu %d: %d\n", k++, (int)ans);
	}
}
