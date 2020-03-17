#include <stdio.h>

int main(void) {
	int n;
	char s[21], t[21];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%s", s);
		scanf("%s", t);
		printf("Case %d: %s, %s\n", i+1, t, s);
	}
	return 0;
}
