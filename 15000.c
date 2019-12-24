#include <stdio.h>

int main(void) {
	char c;
	while(1) {
		scanf("%c", &c);
		if (c=='\n') {
			printf("\n");
			return 0;
		}
		printf("%c", c-32);
	}
}
