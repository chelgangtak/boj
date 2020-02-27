#include <stdio.h>

int main(void) {
	int T, m, n, k, idx;
	char s[50][6];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		if (t>0) printf("\n");
		printf("Scenario #%d:\n", t+1);
		scanf("%d", &m);
		for (int i=0; i<m; i++) scanf("%s", s[i]);
		scanf("%d", &n);
		for (int i=0; i<n; i++) {
			scanf("%d", &k);
			for (int i=0; i<k; i++) {
				scanf("%d", &idx);
				printf("%s", s[idx]);
			}
			printf("\n");
		}
	}
	return 0;
}
