#include <stdio.h>

int main(void) {
	int m, n, a[10], b[10];
	while(1) {
		scanf("%d %d", &m, &n);
		if (m==0&&n==0) return 0;
		int cnt=0;
		for (int i=0; i<m; i++) scanf("%d", &a[i]);
		for (int i=0; i<n; i++) {
			int suc=1;
			for (int j=0; j<m; j++) scanf("%d", &b[j]);
			for (int j=0; j<m; j++) {
				if (b[j]>a[j]) {
					suc=0;
					break;
				}
			}
			cnt+=suc;
		}
		printf("%d\n", cnt);
	}
}
