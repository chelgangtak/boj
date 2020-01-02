#include <stdio.h>

int main(void) {
	char s[21], t[21], a, b;
	int n, one, two;
	
	while(1) {
		scanf("%s %s", s, t);
		if (s[0]=='#' && t[0]=='#') return 0;
		scanf("%d", &n);
		getchar();
		one=0;
		two=0;
		for (int i=0; i<n; i++) {
			scanf("%c %c", &a, &b);
			getchar();
			if (a==b) one++;
			else two++;
		}
		printf("%s %d %s %d\n", s, one, t, two);
	}
}
