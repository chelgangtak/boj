#include <stdio.h>

int main(void) {
	int T, n, a;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		printf("Case %d:\n", t+1);
		for (int i=0; i<n; i++) {
			scanf("%d", &a);
			if (a>=0&&a<6) printf("%d\n", a+1);
		}
	}
	return 0;
}
