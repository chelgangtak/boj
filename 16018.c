#include <stdio.h>

int main(void) {
	char s[101], t[101];
	int N, ans=0;
	scanf("%d", &N);
	scanf("%s", s);
	scanf("%s", t);
	for (int i=0; i<N; i++) {
		if (t[i]=='C'&&s[i]=='C') ans++;
	}
	printf("%d\n", ans);
	return 0;
}
