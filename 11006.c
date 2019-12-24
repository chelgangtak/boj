#include <stdio.h>

int main(void) {
	int T, a, b;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", 2*b-a, a-b);
	}
	return 0;
}
