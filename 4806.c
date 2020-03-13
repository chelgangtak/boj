#include <stdio.h>

int main(void) {
	int n=0;
	char s[101];
	while (fgets(s, sizeof(s), stdin)!=NULL) n++;
	printf("%d\n", n);
	return 0;
}
