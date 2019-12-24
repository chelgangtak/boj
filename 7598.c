#include <stdio.h>

int main(void) {
	char s[6], c;
	int curr, n;

	while(1) {
		scanf("%s %d", s, &curr);
		if (s[0]=='#' && curr==0) return 0;
		getchar();
		while(1) {
			scanf("%c %d", &c, &n);
			if (c=='X' && n==0) break;
			getchar();
			if (c=='B') {
				if (n+curr>68) continue;
				else curr+=n;
			}
			else {
				if (n>curr) continue;
				else curr-=n;
			}
		}
		printf("%s %d\n", s, curr);
	}
}
