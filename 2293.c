#include <stdio.h>

int a[100], d[10001];

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	d[0]=1;
	for (int i=0; i<n; i++) {
		for (int j=1; j<=k; j++) {
			if (j-a[i]>=0) {
				d[j]=d[j]+d[j-a[i]];
				//printf("%d원까지만 써서 %d원에 %d원 더해 %d원을 만드는 방법 %d가지, 누적 %d가지\n", a[i], j-a[i], a[i], j, d[j-a[i]], d[j]);
			}
		}
	}
	printf("%d\n", d[k]);
	return 0;
}
