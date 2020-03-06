#include <stdio.h>

int main(void) {
	int N, M, K, a[100][100], b[100]={0,};
	scanf("%d %d %d", &N, &M, &K);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int j=0; j<M; j++) {
		for (int i=0; i<N; i++) {
			b[i]+=a[i][j];
			if (b[i]>=K) {
				printf("%d %d\n", i+1, j+1);
				return 0;
			}
		}
	}
}
