#include <stdio.h>

int main(void) {
	int X, N, P, ans=0;
	scanf("%d", &X);
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		ans+=X;
		scanf("%d", &P);
		ans-=P;
	}
	printf("%d\n", ans+X);
	return 0;
}
