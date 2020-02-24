#include <stdio.h>
#include <string.h>

int main(void) {
	int T, ans;
	char s[10001], p[101];

	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%s %s", s, p);
		int len=strlen(p);
		int i=0, ans=0;
		while (s[i]!='\0') {
			ans++;
			if (strncmp(s+i, p, len)==0) i+=len;
			else i++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
