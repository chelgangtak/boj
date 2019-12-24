#include <stdio.h>

int main(void) {
	int L, P, n;
	scanf("%d %d", &L, &P);
	for (int i=0; i<5; i++) {
		scanf("%d", &n);
		printf("%d ", n-L*P);
	}
	printf("\n");
	return 0;
}
