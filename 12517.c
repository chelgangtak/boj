#include <stdio.h>
#include <string.h>

int main(void) {
	int N;
	char s[21];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", s);
		printf("Case #%d: %s is ruled by ", i+1, s);
		char c=s[strlen(s)-1];
		if (c=='y') printf("nobody.\n");
		else if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("a queen.\n");
		else printf("a king.\n");
	}
	return 0;
}
