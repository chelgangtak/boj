#include <stdio.h>
#include <string.h>

int main(void) {
	char s[20000];
	int i, ans=0;
	while(1) {
		if (fgets(s, sizeof(s), stdin)==NULL) break;
		for (int i=0; s[i]!='\0'; i++) {
			if (strncmp(s+i, "joke", 4)==0) ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
