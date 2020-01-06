#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	char s[102];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%s", s);
		printf("%d\n", (int)strlen(s));
	}
	return 0;
}
