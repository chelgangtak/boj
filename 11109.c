#include <stdio.h>

int main(void) {
	int T, d, n, s, p;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d %d %d", &d, &n, &s, &p);
		if (d+n*p<n*s) printf("parallelize\n");
		else if (d+n*p>n*s) printf("do not parallelize\n");
		else printf("does not matter\n");
	}
	return 0;
}
