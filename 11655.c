#include <stdio.h>

int main(void) {
	char s[101];
	
	fgets(s, sizeof(s), stdin);
	for (int i=0; s[i]!='\n'; i++) {
		if (s[i]>='A' && s[i]<='Z') {
			s[i]+=13;
			if (s[i]>='Z') s[i]-=26;
		}
		else if (s[i]>='a' && s[i]<='z') {
			if (s[i]>='n') s[i]-=13;
			else s[i]+=13;
		}
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}
