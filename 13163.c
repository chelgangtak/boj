#include <stdio.h>

int main(void) {
	char s[102];
	int n;
	scanf("%d", &n);
	getchar();
	for (int i=0; i<n; i++) {
		fgets(s, sizeof(s), stdin);
		printf("god");
		int first=0;
		for (int i=0; s[i]!='\0'; i++) {
			if (s[i]==' ') {
				if (first==0) first=1;
				else continue;
			}
			else if (first==0) continue;
			else printf("%c", s[i]);
		}
	}
	return 0;
}
