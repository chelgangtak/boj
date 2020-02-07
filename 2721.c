#include <stdio.h>

int main(void) {
	int T, n;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		int sum=0;
		for (int k=1; k<=n; k++) {
			sum+=k*(k+1)*(k+2)/2;
		}
		printf("%d\n", sum);
	}
	return 0;
}
