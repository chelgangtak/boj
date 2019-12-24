#include <stdio.h>

int main(void) {
	int N;
	char s[20];
	scanf("%d", &N);
	getchar();
	scanf("%s", s);
	for (int i=1; s[i]!='\0'; i++) {
		if(s[i]==s[i-1]) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
