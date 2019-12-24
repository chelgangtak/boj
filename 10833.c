#include <stdio.h>

int main(void) {
	int N, sum=0, a, b;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &a, &b);
		sum+=b%a;
	}
	printf("%d\n", sum);
	return 0;
}
