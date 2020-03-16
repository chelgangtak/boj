#include <stdio.h>

int main(void) {
	int T, n;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		printf("Case %d: ", t+1);
		scanf("%d", &n);
		printf("%d ", n-1);
		int a;
		for (int i=n; i>=0; i--) {
			scanf("%d", &a);
			if (i>=1) printf("%d ", a*i);
		}
		printf("\n");
	}
}
