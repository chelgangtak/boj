#include <stdio.h>

int main(void) {
	int T, A, B;
	scanf("%d", &T);
	for (int t=1; t<=T; t++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", t, A+B);
	}
	return 0;
}
