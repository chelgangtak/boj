#include <stdio.h>

int main(void) {
	char s[101], t[101], k[101];
	int i, j=0;
	scanf("%s", s);
	for (i=0; s[i]!='\0'; i++) {
		if (s[i]>='0'&&s[i]<='9') continue;
		t[j++]=s[i];
	}
	t[j]='\0';
	scanf("%s", k);
	for (i=0; t[i]!='\0'; i++) {
		for (j=0; k[j]!='\0'; j++) {
			if (t[i+j]!=k[j]) break;
		}
		if (k[j]=='\0') {
			printf("1\n");
			return 0;
		}
	}
	printf("0\n");
	return 0;
}
