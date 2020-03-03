#include <stdio.h>

int main(void) {
	int T, n, a, sum;
	for (int t=1; ; t++) {
		scanf("%d", &n);
		if (n==0) return 0;
		sum=0;
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=i; j++) {
				scanf("%d", &a);
				if (i==n||j==1||j==i) sum+=a;
			}
		}
		printf("Case #%d:%d\n", t, sum);
	}
	return 0;
}
