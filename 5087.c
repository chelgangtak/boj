#include <stdio.h>

int main(void) {
	char s[1000];
	int a, b;
	while (1) {
		fgets(s, sizeof(s), stdin);
		if (s[0]=='#') return 0;
		a=0;
		b=0;
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]!='A'&&(s[i]<'1'||s[i]>'9')) continue;
			if (s[i]=='A'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9') a++;
			else b++;
		}
		if (a>b) printf("Cheryl\n");
		else if (a<b) printf("Tania\n");
		else printf("Draw\n");
	}
	return 0;
}
