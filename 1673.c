#include <stdio.h>

int main(void) {
	int n, k;
	long int ans;
	while (1) {	
		int x=scanf("%d %d", &n, &k);
		if (x==EOF) return 0;
		ans=n;
		while (n>=k) {
			ans+=n/k;
			n=n/k+n%k;
		}
		printf("%ld\n", ans);
	}
}
