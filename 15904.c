#include <stdio.h>

int main(void) {
	char s[1100];
	int k=0;
	fgets(s, sizeof(s), stdin);
	for (int i=0; s[i]!='\n'; i++) {
		if (k==0 && s[i]=='U') k++;
		if (k==1 && s[i]=='C') k++;
		if (k==2 && s[i]=='P') k++;
		if (k==3 && s[i]=='C') k++;
	}
	if (k==4) printf("I love UCPC\n");
	else printf("I hate UCPC\n");
	return 0;
}
