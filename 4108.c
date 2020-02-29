#include <stdio.h>

int main(void) {
	int R, C, dir[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
	while(1) {
		scanf("%d %d", &R, &C);
		getchar();
		if (R+C==0) return 0;
		char a[100][100];
		for (int i=0; i<R; i++) {
			for (int j=0; j<C; j++) scanf("%c", &a[i][j]);
			getchar();
		}
		for (int i=0; i<R; i++) {
			for (int j=0; j<C; j++) {
				if (a[i][j]=='*') printf("*");
				else {
					int cnt=0;
					for (int d=0; d<8; d++) {
						int r=i+dir[d][0];
						int c=j+dir[d][1];
						if (r<0||r>=R||c<0||c>=C) continue;
						if (a[r][c]=='*') cnt++;
					}
					printf("%c", '0'+cnt);
				}
			}
			printf("\n");
		}
	}
}
