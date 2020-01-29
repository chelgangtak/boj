#include <stdio.h>

int main(void) {
	int R, C, T, a[51][51], r=0, ans=0;
	scanf("%d %d %d", &R, &C, &T);
	for (int i=1; i<=R; i++) {
		for (int j=1; j<=C; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j]==-1) {
				if (r!=0) continue;
				r=i;
			}
		}
	}
	for (int t=1; t<=T; t++) {
		int b[51][51], dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
		for (int i=1; i<=R; i++) {
			for (int j=1; j<=C; j++) {
				b[i][j]=a[i][j];
				if (a[i][j]==-1) continue;
				for (int d=0; d<4; d++) {
					int newr=i+dir[d][0];
					int newc=j+dir[d][1];
					if (newr<1||newr>R||newc<1||newc>C||a[newr][newc]==-1) continue;
					b[i][j]-=a[i][j]/5;
					b[i][j]+=a[newr][newc]/5;
				}
			}
		}
		for (int i=r-1; i>1; i--) b[i][1]=b[i-1][1];
		for (int j=1; j<C; j++) b[1][j]=b[1][j+1];
		for (int i=1; i<r; i++) b[i][C]=b[i+1][C];
		for (int j=C; j>2; j--) b[r][j]=b[r][j-1];
		for (int i=r+2; i<R; i++) b[i][1]=b[i+1][1];
		for (int j=1; j<C; j++) b[R][j]=b[R][j+1];
		for (int i=R; i>r+1; i--) b[i][C]=b[i-1][C];
		for (int j=C; j>2; j--) b[r+1][j]=b[r+1][j-1];
		b[r][2]=0;
		b[r+1][2]=0;
		for (int i=1; i<=R; i++) {
			for (int j=1; j<=C; j++) a[i][j]=b[i][j];
		}
	}
	for (int i=1; i<=R; i++) {
		for (int j=1; j<=C; j++) {
			if (a[i][j]>0) ans+=a[i][j];
		}
	}
	printf("%d\n", ans);
	return 0;
}
