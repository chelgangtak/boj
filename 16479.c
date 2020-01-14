#include <stdio.h>

int main(void) {
	int D1, D2, K;
	scanf("%d %d %d", &K, &D1, &D2);
	printf("%lf\n", K*K-((double)(D1-D2)/2)*((double)(D1-D2)/2));
	return 0;
}
