#include <stdio.h>
#include <string.h>

int main(void) {
	char s[101];
	scanf("%s", s);
	int len=strlen(s);
	for (int i=0; i<len-1-i; i++) {
		if (s[i]!=s[len-1-i]) {
			printf("0\n");
			return 0;
		}
	}
	printf("1\n");
	return 0;
}
