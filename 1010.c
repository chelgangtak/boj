#include <stdio.h>

int main(void) {
	int a[30][30], T, N, M;
	for (int i=0; i<30; i++) {
		for (int j=0; j<=i; j++) {
			if (j==0||j==i) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	scanf("%d", &T);
	for (int i=0; i<T; i++) {
		scanf("%d %d", &N, &M);
		printf("%d\n", a[M][N]);
	}
	return 0;
}
