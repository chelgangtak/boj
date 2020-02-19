#include <stdio.h>
#include <string.h>

int main(void) {
	int N;
	char s[1001];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", s);
		int len=strlen(s);
		if (s[len/2-1]==s[len/2]) printf("Do-it\n");
		else printf("Do-it-Not\n");
	}
	return 0;
}
