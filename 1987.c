#include <stdio.h>

int R, C, v[26]={0,}, max=1, dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
char a[20][20];

void dfs(int r, int c, int n) {
	for (int i=0; i<4; i++) {
		int newr=r+dir[i][0];
		int newc=c+dir[i][1];
		if (newr<0||newr>=R||newc<0||newc>=C) continue;
		if (v[a[newr][newc]-'A']==1) continue;
		v[a[newr][newc]-'A']=1;
		dfs(newr, newc, n+1);
		v[a[newr][newc]-'A']=0;
	}
	if (n>max) max=n;
}

int main(void) {
	scanf("%d %d", &R, &C);
	getchar();
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) scanf("%c", &a[i][j]);
		getchar();
	}
	v[a[0][0]-'A']=1;
	dfs(0, 0, 1);
	printf("%d\n", max);
	return 0;
}
