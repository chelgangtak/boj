#include <stdio.h>

int a[500][500], d[500][500];

int main(void) {
	int M, N;
	scanf("%d %d", &M, &N);
	for (int i=0; i<M; i++) {
		for (int j=0; j<N; j++) scanf("%d", &a[i][j]);
	}
	for (int i=0; i<M; i++) {
		for (int j=0; j<N; j++) {
			if (i==0 && j==0) d[i][j]=1;
			else if (i==0) {
				if (a[i][j]<a[i][j-1]) d[i][j]=d[i][j-1];
				else d[i][j]=0;
			}
			else if (j==0) {
				if (a[i][j]<a[i-1][j]) d[i][j]=d[i-1][j];
				else d[i][j]=0;
			}
			else {
				if (a[i][j]<a[i-1][j] && a[i][j]<a[i][j-1]) d[i][j]=d[i-1][j]+d[i][j-1];
				else if (a[i][j]<a[i-1][j]) d[i][j]=d[i-1][j];
				else if (a[i][j]<a[i][j-1]) d[i][j]=d[i][j-1];
				else d[i][j]=0;
			}
		}
	}
	printf("%d\n", d[M-1][N-1]);
	return 0;
}
