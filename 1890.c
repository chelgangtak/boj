#include <stdio.h>

int a[100][100];
long int d[100][100];

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			scanf("%d", &a[i][j]);
			d[i][j]=0;
		}
	}
	d[0][0]=1;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			int s=a[i][j];
			if (s<=0 || d[i][j]==0) continue;
			if (i+s<N) {
				d[i+s][j]+=d[i][j];
				//printf("(%d,%d)->(%d,%d)\n", i, j, i+s, j);
				//printf("d[%d][%d]=%ld\n", i+s, j, d[i+s][j]);
			}
			if (j+s<N) {
				d[i][j+s]+=d[i][j];
				//printf("(%d,%d)->(%d,%d)\n", i, j, i, j+s);
				//printf("d[%d][%d]=%ld\n", i, j+s, d[i][j+s]);
			}
		}
	}
	printf("%ld\n", d[N-1][N-1]);
	return 0;
}
