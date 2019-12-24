#include <stdio.h>

int main(void) {
	int n, min, max, k;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &k);
		if (i==0) {
			min=k;
			max=k;
		}
		else {
			if (max<k) max=k;
			if (min>k) min=k;
		}
	}
	printf("%d\n", max*min);
	return 0;
}
