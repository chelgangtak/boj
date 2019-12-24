#include <stdio.h>
#include <string.h>

int main(void) {
	char s[300];
	int ans;
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (s[0]=='#'&&s[1]=='\n') return 0;
		ans=0;
		for (int i=0; s[i]!='\n'; i++) if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') ans++;
		printf("%d\n", ans);
	}
}
