#include <stdio.h>

int main(void) {
	int n, a, max;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		for (int i=0; i<5; i++) {
			scanf("%d", &a);
			if (i==0) max=a;
			else if (a>max) max=a;
		}
		printf("Case #%d: %d\n", i+1, max);
	}
	return 0;
}
