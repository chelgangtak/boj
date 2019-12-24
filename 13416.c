#include <stdio.h>

int f(int A, int B, int C) {
	int max=A;
	if (max<B) max=B;
	if (max<C) max=C;
	return max;
}

int main(void) {
	int T, N, A, B, C, max;
	long int ans;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		ans=0;
		for (int i=0; i<N; i++) {
			scanf("%d %d %d", &A, &B, &C);
			max=f(A,B,C);
			if (max>0) ans+=max;
		}
		printf("%ld\n", ans);
	}
	return 0;
}
