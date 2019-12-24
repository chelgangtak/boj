#include <stdio.h>

int main(void) {
	int S=0, T=0, n;
	for (int i=0; i<4; i++) {
		scanf("%d", &n);
		S+=n;
	}
	for (int i=0; i<4; i++) {
		scanf("%d", &n);
		T+=n;
	}
	if (S>=T) printf("%d\n", S);
	else printf("%d\n", T);
	return 0;
}
