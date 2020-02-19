#include <stdio.h>

int main(void) {
	int n;
	char s[51];
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		scanf("%s", s);
		if (i>=2) printf("\n");
		printf("String #%d\n", i);
		for (int j=0; s[j]!='\0'; j++) {
			if (s[j]!='Z') printf("%c", s[j]+1);
			else printf("A");
		}
		printf("\n");
	}
	return 0;
}
