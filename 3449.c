#include <stdio.h>

int main(void) {
	int T;
	char s[101], p[101];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int ans=0;
		scanf("%s", s);
		scanf("%s", p);
		for (int i=0; s[i]!='\0'; i++) {
			if (s[i]!=p[i]) ans++;
		}
		printf("Hamming distance is %d.\n", ans);
	}
	return 0;
}
