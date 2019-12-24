#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	for (int i=0; i<9; i++) {
		scanf("%d", &b);
		a-=b;
	}
	printf("%d\n", a);
	return 0;
}
