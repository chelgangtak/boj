#include <stdio.h>

int main(void) {
	char s[500][81], t[500][81];
	int n;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		for (int i=0; i<(n+1)/2; i++) scanf("%s", s[i]);
		for (int i=0; i<n/2; i++) scanf("%s", t[i]);
		for (int i=0; i<n/2; i++) printf("%s\n%s\n", s[i], t[i]);
		if (n%2==1) printf("%s\n", s[(n+1)/2-1]);
	}
}
