#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		char s[1001], r[27];
		getchar();
		fgets(s, sizeof(s), stdin);
		scanf("%s", r);
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==' ') printf("%c", s[i]);
			else printf("%c", r[s[i]-'A']);
		}
		printf("\n");
	}
	return 0;
}
