#include <stdio.h>

int main(void) {
	char s[11];
	scanf("%s", s);
	for (int i=0; s[i+1]!='\0'; i++) {
		int a=1, b=1;
		for (int j=0; j<=i; j++) a*=(s[j]-'0');
		for (int j=i+1; s[j]!='\0'; j++) b*=(s[j]-'0');
		if (a==b) {
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
