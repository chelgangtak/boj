#include <stdio.h>

int a[100], d[10001];

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i=1; i<=k; i++) d[i]=-1;
	d[0]=0;
	for (int i=0; i<n; i++) {
		for (int j=1; j<=k; j++) {
			if (j-a[i]>=0) {
				if (d[j-a[i]]!=-1) {
					if (d[j]==-1) d[j]=1+d[j-a[i]];
					else if (1+d[j-a[i]]<d[j]) d[j]=1+d[j-a[i]];
				}
			}
		}
	}
	printf("%d\n", d[k]);
	return 0;
}
