#include <stdio.h>

int main(void) {
	int n, a;
	char c;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d %c", &a, &c);
		for (int j=0; j<a; j++) printf("%c", c);
		printf("\n");
	}
	return 0;
}
