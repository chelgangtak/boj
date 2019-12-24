#include <stdio.h>
#include <string.h>

int main(void) {
	char s[501];
	int end;
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (strcmp(s, "END\n")==0) return 0;
		for (end=0; s[end]!='\n'; end++);
		for (int i=end-1; i>=0; i--) printf("%c", s[i]);
		printf("\n");
	}
}
