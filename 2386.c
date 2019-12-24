#include <stdio.h>

int main(void) {
	char s[300];
	char c;
	while (1) {
		scanf("%c", &c);
		if (c=='#') return 0;
		fgets(s, sizeof(s), stdin);
		int cnt=0;
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==c || s[i]==c-32) cnt++;
		}
		printf("%c %d\n", c, cnt);
	}
}
