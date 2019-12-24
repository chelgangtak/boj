#include <stdio.h>

int main(void) {
	int n, a;
	char s[25];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%s", s);
		a=0;
		for (int j=0; s[j]!='\0'; j++) {
			a=a*2+(s[j]-'0');
		}
		printf("%d\n", a);
	}
	return 0;
}
