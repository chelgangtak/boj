#include <stdio.h>

int main(void) {
	int v[500][500]={{0,},}, N, ans=0;
	scanf("%d", &N);
	for (int n=0; n<N; n++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i=x1; i<x2; i++) {
			for (int j=y1; j<y2; j++) {
				if (v[i][j]==0) {
					v[i][j]=1;
					ans++;
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
