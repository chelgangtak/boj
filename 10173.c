#include <stdio.h>
#include <string.h>

int main(void) {
	char s[82];
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (strcmp(s, "EOI\n")==0) return 0;
		int suc=0;
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]=='N'||s[i]=='n') {
				if (s[i+1]!='E'&&s[i+1]!='e') continue;
				if (s[i+2]!='M'&&s[i+2]!='m') continue;
				if (s[i+3]!='O'&&s[i+3]!='o') continue;
				suc=1;
				break;
			}
		}
		if (suc==1) printf("Found\n");
		else printf("Missing\n");
	}
}
