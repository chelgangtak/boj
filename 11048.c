#include <stdio.h>
int m[1000][1000], d[1000][1000];

int main(void) {
	int N, M, a, b, c;
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) scanf("%d", &m[i][j]);
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (i==0 && j==0) d[i][j]=m[i][j];
			if (i>0) a=d[i-1][j];
			else a=0;
			if (j>0) b=d[i][j-1];
			else b=0;
			if (i>0 && j>0) c=d[i-1][j-1];
			else c=0;
			if (a>=b && a>=c) d[i][j]=a+m[i][j];
			else if (b>=c && b>=a) d[i][j]=b+m[i][j];
			else if (c>=a && c>=b) d[i][j]=c+m[i][j];
		}
	}
	printf("%d\n", d[N-1][M-1]);
	return 0;
}
