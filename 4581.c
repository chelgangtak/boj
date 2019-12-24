#include <stdio.h>

int main(void) {
	char s[71];
	int y, n, a, len;
	while(1) {
		scanf("%s", s);
		if (s[0]=='#') return 0;
		y=0; n=0; a=0; len=0;
		for (int i=0; s[i]!='\0'; i++) {
			if (s[i]=='Y') y++;
			else if (s[i]=='N') n++;
			else if (s[i]=='A') a++;
			len++;
		}
		if (a>=(float)len/2) printf("need quorum\n");
		else if (y>n) printf("yes\n");
		else if (y<n) printf("no\n");
		else printf("tie\n");
	}
}
