#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp (const void *a, const void *b) {
	char *pa=(char*)a, *pb=(char*)b;
	return strcmp(pa, pb);
}

int main(void) {
	int n;
	char s[250][251];
	for (int i=0; ; i++) {
		scanf("%d", &n);
		getchar();
		if (n==0) return 0;
		for (int i=0; i<n; i++) fgets(s[i], sizeof(s[i]), stdin);
		qsort(s, n, sizeof(s[0]), cmp);
		printf("%d\n", i+1);
		for (int i=0; i<n; i++) printf("%s", s[i]);
	}
}
