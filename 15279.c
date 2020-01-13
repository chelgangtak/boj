#include <stdio.h>

int main(void) {
	int N, b;
	double p;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %lf", &b, &p);
		printf("%.4lf %.4lf %.4lf\n", 60*(b-1)/p, 60*b/p, 60*(b+1)/p);
	}
	return 0;
}
