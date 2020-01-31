#include <stdio.h>

int main(void) {
	char s[21];
	int n=0;
	scanf("%s", s);
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]>='a'&&s[i]<='z') n+=s[i]-'a'+1;
		else n+=s[i]-'A'+27;
	}
	if (n==1) printf("It is a prime word.\n");
	else {
		for (int i=2; i*i<=n; i++) {
			if (n%i==0) {
				printf("It is not a prime word.\n");
				return 0;
			}
		}
		printf("It is a prime word.\n");
	}
	return 0;
}
