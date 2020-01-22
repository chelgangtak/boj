#include <stdio.h>
int a[999][999];
int main(void) {
	int d[4][2]={{-1,0},{0,1},{1,0},{0,-1}}, cnt=1, k=1, dir=0, r=0, c=0, N, n, row, col;
	scanf("%d", &N);
	scanf("%d", &n);
	row=N/2;
	col=N/2;
	a[row][col]=cnt++;
	while(cnt<=N*N) {
		for (int j=1; j<=2; j++) {
			for (int i=1; i<=k; i++) {
				row=row+d[dir][0];
				col=col+d[dir][1];
				if (cnt==n) {
					r=row;
					c=col;
				}
				a[row][col]=cnt++;
				if (cnt>N*N) break;
			}		
			if (cnt>N*N) break;
			dir=(dir+1)%4;
		}
		if (cnt>N*N) break;
		k++;
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("%d %d\n", r+1, c+1);
	return 0;
}
