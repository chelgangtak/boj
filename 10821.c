#include <stdio.h>

int main(void) {
	int ans=1;
	char s[101];
	scanf("%s", s);
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]==',') ans++;
	}
	printf("%d\n", ans);
	return 0;
}
