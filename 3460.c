#include <stdio.h>

int main(void) {
	int T, n;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		for (int i=0; n>0; i++) {
			if (n%2==1) printf("%d ", i);
			n/=2;
		}
		printf("\n");
	}
	return 0;
}
