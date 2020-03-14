#include <stdio.h>

int main(void) {
	double N, M, B;
	int ans;
	while (1) {
		if (scanf("%lf %lf %lf", &N, &B, &M)==EOF) return 0;
		ans=0;
		while (N<=M) {
			N=N*(1+B/100);
			ans++;
		}
		printf("%d\n", ans);
	}
}
