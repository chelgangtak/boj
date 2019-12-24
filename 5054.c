#include <stdio.h>

int main(void) {
	int T, n, a, min, max;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &n);
		for (int i=0; i<n; i++) {
			scanf("%d", &a);
			if (i==0) {
				min=a;
				max=a;
			}
			else {
				if (max<a) max=a;
				if (min>a) min=a;
			}
		}
		printf("%d\n", 2*(max-min));
	}
	return 0;
}
