#include <stdio.h>

int main(void) {
	char s[31];
	int ans=0;
	scanf("%s", s);
	for (int i=0; s[i+1]!='\0'; i++) {
		if (s[i]=='s'&&s[i+1]=='s') ans=1;
	}
	if (ans==0) printf("no ");
	printf("hiss\n");
	return 0;
}
