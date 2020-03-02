#include <stdio.h>

int main(void) {
	int n, k, s, a[401][401]={{0,},};
	scanf("%d %d", &n, &k);
	for (int i=0; i<k; i++) {
		int e1, e2;
		scanf("%d %d", &e1, &e2);
		a[e1][e2]=1;
	}
	for (int k=1; k<=n; k++) {
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=n; j++) {
				if (a[i][j]==1) continue;
				if (a[i][k]==1&&a[k][j]==1) a[i][j]=1;
			}
		}
	}
	scanf("%d", &s);
	for (int i=0; i<s; i++) {
		int e1, e2;
		scanf("%d %d", &e1, &e2);
		if (a[e1][e2]==1) printf("-1\n");
		else if (a[e2][e1]==1) printf("1\n");
		else printf("0\n");
	}
	return 0;
}
