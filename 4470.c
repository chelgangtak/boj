#include <stdio.h>

int main(void) {
	int N;
	char s[100];
	scanf("%d", &N);
	getchar();
	for (int i=1; i<=N; i++) {
		fgets(s, sizeof(s), stdin);
		printf("%d. %s", i, s);
	}
	return 0;
}
