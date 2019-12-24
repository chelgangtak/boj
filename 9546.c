#include <stdio.h>

int main(void) {
	int T, k;
	double n;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &k);
		n=0;
		for (int i=0; i<k; i++) {
			n=(n+0.5)*2;
		}
		printf("%d\n", (int)n);
	}
	return 0;
}
