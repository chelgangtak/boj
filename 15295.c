#include <stdio.h>

int main(void) {
	int T, a, b;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", a, b*(b+1)/2+b);
	}
	return 0;
}
