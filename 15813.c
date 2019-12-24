#include <stdio.h>

int main(void) {
	char s[101];
	int n, ans=0;
	scanf("%d", &n);
	scanf("%s", s);
	for (int i=0; i<n; i++) {
		ans+=s[i]-'A'+1;
	}
	printf("%d\n", ans);
	return 0;
}
