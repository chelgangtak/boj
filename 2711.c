#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int n;
		char s[81];
		scanf("%d %s", &n, s);
		for (int i=0; s[i]!='\0'; i++) {
			if (i==n-1) continue;
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
