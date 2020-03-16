#include <stdio.h>

int main(void) {
	int T, N;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		printf("Case %d:\n", t+1);
		for (int i=1; i<=N-i; i++) {
			if (i>6||N-i>6) continue;
			printf("(%d,%d)\n", i, N-i);
		}
	}
	return 0;
}
