#include <stdio.h>
#include <string.h>

int main(void) {
	int i;
	char s[6];
	while (1) {
		scanf("%s", s);
		if (strcmp(s, "0")==0) return 0;
		int len=strlen(s);
		for (i=0; i<len-1-i; i++) {
			if (s[i]!=s[len-1-i]) {
				printf("no\n");
				break;
			}
		}
		if (i>=len-1-i) printf("yes\n");
	}
}
