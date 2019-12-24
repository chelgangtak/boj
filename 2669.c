#include <stdio.h>

int a[100][100];

int main(void) {
	int x1, y1, x2, y2, ans=0;
	for (int i=0; i<4; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i=y1; i<y2; i++) {
			for (int j=x1; j<x2; j++) a[i][j]=1;
		}
	}
	for (int i=0; i<100; i++) {
		for (int j=0; j<100; j++) {
			if (a[i][j]==1) ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
