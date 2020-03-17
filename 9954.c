#include <stdio.h>
#include <string.h>

int main(void) {
	char s[257];
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (s[0]=='#') return 0;
		int len=strlen(s);
		int d=s[len-2]-'A';
		s[len-2]='\0';
		for (int i=0; s[i]!='\0'; i++) {
			if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) {
				char c=s[i]-d;
				if (s[i]<='Z'&&c<'A') c=c-'A'+'Z'+1;
				else if (s[i]>='a'&&c<'a') c=c-'a'+'z'+1;
				printf("%c", c);
			}
			else printf("%c", s[i]);
		}
		printf("\n");
	}
}
