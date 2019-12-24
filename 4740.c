#include <stdio.h>
#include <string.h>

int main(void) {
	char s[81];
	while(1) {
		fgets(s, sizeof(s), stdin);
		s[strlen(s)-1]='\0';
		if (strcmp(s, "***")==0) return 0;
		for (int i=strlen(s)-1; i>=0; i--) printf("%c", s[i]);
		printf("\n");
	}
}
