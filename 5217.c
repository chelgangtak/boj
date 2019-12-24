#include <stdio.h>

int main(void) {
	int T, n, first;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		printf("Pairs for %d: ", n);
		first=1;
		for (int i=1; i<n-i; i++) {
			if (first==1) first=0;
			else printf(", ");
			printf("%d %d", i, n-i);
		}
		printf("\n");
	}
	return 0;
}
