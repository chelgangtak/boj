#include <stdio.h>

int main(void) {
	char v[6]={'a','i','y','e','o','u'}, c[20]={'b','k','x','z','n','h','d','c','w','g','p','v','j','q','t','s','r','l','m','f'}, s[102];
	int u=0;
	while(1) {
		if(fgets(s, sizeof(s), stdin)==NULL) return 0;
		for (int i=0; s[i]!='\0'; i++) {
			int find=0;
			if (s[i]>='A'&&s[i]<='Z') {
				u=1;
				s[i]=s[i]-'A'+'a';
			}
			else if (s[i]<'a'||s[i]>'z') {
				printf("%c", s[i]);
				continue;
			}
			for (int j=0; j<6; j++) {
				if (s[i]==v[j]) {
					find=1;
					if (u==1) {
						u=0;
						printf("%c", v[(j+3)%6]-'a'+'A');
					}
					else printf("%c", v[(j+3)%6]);
					break;
				}
			}
			if (find==1) continue;
			for (int j=0; j<20; j++) {
				if (s[i]==c[j]) {
					find=1;
					if (u==1) {
						u=0;
						printf("%c", c[(j+10)%20]-'a'+'A');
					}
					else printf("%c", c[(j+10)%20]);
					break;
				}
			}
			if (find==1) continue;

		}
	}
}
