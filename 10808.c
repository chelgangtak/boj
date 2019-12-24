#include <stdio.h>

int main(void) {
	char s[101];
	int a[26];
	scanf("%s", s);
	for (int i=0; i<26; i++) a[i]=0;
	for (int i=0; s[i]!='\0'; i++) {
		a[(int)s[i]-'a']++;
	}
	for (int i=0; i<26; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}
