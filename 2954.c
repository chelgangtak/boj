#include <stdio.h>

int main(void) {
	char s[101];
	fgets(s, sizeof(s), stdin);
	for (int i=0; s[i]!='\n'; i++) {
		printf("%c", s[i]);
		if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') i+=2;
	}
	printf("\n");
	return 0;
}
