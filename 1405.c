#include <stdio.h>

int N, v[29][29]={{0,},};
double e, w, s, n, ans=0;

void dfs(int r, int c, int k, double p) {
	if (v[r][c]==1) return;
	v[r][c]=1;
	if (k==N) ans+=p;
	else {
		dfs(r, c+1, k+1, p*e/100);
		dfs(r, c-1, k+1, p*w/100);
		dfs(r+1, c, k+1, p*s/100);
		dfs(r-1, c, k+1, p*n/100);
	}
	v[r][c]=0;
}	

int main(void) {
	scanf("%d %lf %lf %lf %lf", &N, &e, &w, &s, &n);
	dfs(14, 14, 0, 1);
	printf("%.10lf\n", ans);
}
