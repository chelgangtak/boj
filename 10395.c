#include <stdio.h>

int main(void) {
	int a[5], b;
	for (int i=0; i<5; i++) scanf("%d", &a[i]);
	for (int i=0; i<5; i++) {
		scanf("%d", &b);
		if (a[i]+b!=1) {
			printf("N\n");
			return 0;
		}
	}
	printf("Y\n");
	return 0;
}
