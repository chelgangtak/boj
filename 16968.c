#include <stdio.h>

int main(void) {
	char s[5];
	int ans=1;
	scanf("%s", s);
	for (int i=0; s[i]!='\0'; i++) {
		int n;
		if (s[i]=='c') {
			if (i>0&&s[i-1]=='c') n=25;
			else n=26;
		}
		else {
			if (i>0&&s[i-1]=='d') n=9;
			else n=10;
		}
		ans*=n;
	}
	printf("%d\n", ans);
	return 0;
}
