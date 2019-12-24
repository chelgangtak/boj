#include <stdio.h>

int main(void) {
	char s[25];
	scanf("%s", s);
	for (int i=1; i<=9; i++) {
		if (i==5) printf(":%s:", s);
		else printf(":fan:");
		if (i%3==0) printf("\n");
	}
	return 0;
}
