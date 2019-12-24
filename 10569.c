#include <stdio.h>

int main(void) {
	int T, V, E;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d", &V, &E);
		printf("%d\n", 2-V+E);
	}
	return 0;
}
