#include <stdio.h>
#include <string.h>

int main(void) {
	char s[11], t[11];
	while(1) {
		scanf("%s %s", s, t);
		if (s[0]=='0'&&t[0]=='0') return 0;
		int ans=0, c=0, i=strlen(s), j=strlen(t);
		while(i>=0&&j>=0) {
			if (s[i]-'0'+t[j]-'0'+c>=10) {
				c=1;
				ans++;
			}
			else c=0;
			i--;
			j--;
		}
		if (i<0) {
			while(j>=0) {
				if (t[j]-'0'+c>=10) {
					c=1;
					ans++;
				}
				else c=0;
				j--;
			}
		}
		else {
			while(i>=0) {
				if (s[i]-'0'+c>=10) {
					c=1;
					ans++;
				}
				else c=0;
				i--;
			}
		}
		printf("%d\n", ans);
	}
}
