#include <stdio.h>

int main(void) {
	int N, D[10000], C[10000], fail, ans=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &D[i], &C[i]);
	}
	for (int i=0; i<N; i++) {
		fail=0;
		for (int j=0; j<N; j++) {
			if (i==j) continue;
			if (D[j]<=D[i] && C[j]<=C[i]) {
				fail=1;
				break;
			}
		}
		if (fail==0) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
