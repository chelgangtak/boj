#include <stdio.h>

int main(void) {
	char s[61];
	int f;
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (s[0]=='E'&&s[1]=='N'&&s[2]=='D'&&s[3]=='\n') return 0;
		int v[26]={0,};
		f=0;
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==' ') continue;
			if (v[s[i]-'A']==1) {
				f=1;
				break;
			}
			else v[s[i]-'A']++;
		}
		if (f==1) continue;
		else printf("%s", s);
	}
}
