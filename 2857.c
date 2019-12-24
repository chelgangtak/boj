#include <stdio.h>

int main(void) {
	char s[20];
	int fbi=0;
	for (int i=1; i<=5; i++) {
		scanf("%s", s);
		for (int j=0; s[j]!='\0'; j++) {
			if (s[j]!='F') continue;
			if (s[j+1]=='B'&&s[j+2]=='I') {
				fbi=1;
				printf("%d ", i);
				break;
			}
		}
	}
	if (fbi==0) printf("HE GOT AWAY");
	printf("\n");
	return 0;
}
