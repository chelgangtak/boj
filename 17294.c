#include <stdio.h>

int main(void) {
	char s[20];
	int success=1, d;
	scanf("%s", s);
	for (int i=0; s[i]!='\0'; i++) {
		if (i==0) continue;
		if (i==1) d=s[i]-s[i-1];
		if (i>1) {
			if (s[i]-s[i-1]!=d) {
				success=0;
				break;
			}
		}
	}
	if (success==1) printf("yes\n");
	else printf("no\n");
	return 0;	
}
