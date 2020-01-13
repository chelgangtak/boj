#include <stdio.h>

int main(void) {
	int n, k, a, r, ans=1;
	scanf("%d %d", &n, &k);
	r=k;
	for (int i=0; i<n; i++) {
		scanf("%d", &a);
		if (a<=r) r-=a;
		else {
			r=k-a;
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
