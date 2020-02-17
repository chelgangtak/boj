#include <stdio.h>

int main(void) {
	int T, n, ans;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		ans=n;
		while (n>1) {
			if (n%2==0) n/=2;
			else {
				n=n*3+1;
				if (n>ans) ans=n;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
