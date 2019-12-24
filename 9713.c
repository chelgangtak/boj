#include <stdio.h>

int main(void) {
	int T, n, sum;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		sum=0;
		for (int i=1; i<=n; i++) {
			if (i%2==1) sum+=i;
		}
		printf("%d\n", sum);
	}
	return 0;
}
