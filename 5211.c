#include <stdio.h>

int A=0, C=0;

void count(char c) {
	if (c=='A'||c=='D'||c=='E') A++;
	else if (c=='C'||c=='F'||c=='G') C++;
}

int main(void) {
	char s[101], last;
	scanf("%s", s);
	count(s[0]);
	for (int i=0; ; i++) {
		if (s[i+1]=='\0') {
			last=s[i];
			break;
		}
		if (s[i]!='|') continue;
		count(s[i+1]);
	}
	if (A==C) count(last);
	if (A>C) printf("A-minor\n");
	else printf("C-major\n");
	return 0;
}
