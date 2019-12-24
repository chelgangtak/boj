#include <stdio.h>

int main(void) {
	int N, x, y, m[100][100], ans=0;
	for (int i=0; i<100; i++) {
		for (int j=0; j<100; j++) m[i][j]=0;
	}
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &x, &y);
		for (int i=x; i<x+10; i++) {
			for (int j=y; j<y+10; j++) {
				m[i][j]=1;
			}
		}
	}
	for (int i=0; i<100; i++) {
		for (int j=0; j<100; j++) {
			printf("%d", m[i][j]);
			if (m[i][j]==1) ans++;
		}
		printf("\n");
	}
	printf("%d\n", ans);
	return 0;
}
