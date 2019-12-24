#include <stdio.h>

int main(void) {
	char s[6];
	int t, p, stop, off, on;
	while(1) {
		scanf("%s %d", s, &t);
		if (s[0]=='#' && t==0) return 0;
		scanf("%d %d", &p, &stop);
		for (int i=0; i<stop; i++) {
			scanf("%d %d", &off, &on);
			if (p+on-off>t) p=t;
			else p=p+on-off;
		}
		printf("%s %d\n", s, p);
	}
}
