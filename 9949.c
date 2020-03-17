#include <stdio.h>

int main(void) {
	char a, b, s[256];
	int n;

	for (int t=1; ; t++) {
		scanf("%c %c", &a, &b);
		if (a=='#'&&b=='#') return 0;
		scanf("%d", &n);
		getchar();
		if (t>1) printf("\n");
		printf("Case %d\n", t);
		for (int i=0; i<n; i++) {
			fgets(s, sizeof(s), stdin);
			for (int i=0; s[i]!='\n'; i++) {
				if (s[i]>='a'&&s[i]<='z') {
					if (s[i]==a||s[i]==b) printf("_");
					else printf("%c", s[i]);
				}
				else if (s[i]>='A'&&s[i]<='Z') {
					char c=s[i]-'A'+'a';
					if (c==a||c==b) printf("_");
					else printf("%c", s[i]);
				}
				else printf("%c", s[i]);
			}
			printf("\n");
		}
	}
}
