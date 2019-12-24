#include <stdio.h>

int main(void) {
	int n, g, b, j;
	char s[30];
	scanf("%d", &n);
	getchar();
	for (int i=0; i<n; i++) {
		fgets(s, sizeof(s), stdin);
		g=0;
		b=0;
		for (j=0; s[j]!='\n'; j++) {
			if (s[j]=='G'||s[j]=='g') g++;
			else if (s[j]=='B'||s[j]=='b') b++;
		}
		s[j]='\0';
		printf("%s ", s);
		if (g>b) printf("is GOOD\n");
		else if (g<b) printf("is A BADDY\n");
		else printf("is NEUTRAL\n");
	}
	return 0;
}
