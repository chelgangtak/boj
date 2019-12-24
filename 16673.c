#include <stdio.h>

int main(void) {
	int C, K, P;
	scanf("%d %d %d", &C, &K, &P);
	int ans;
	ans=K*C*(C+1)/2+P*C*(C+1)*(2*C+1)/6;
	printf("%d\n", ans);
	return 0;
}
