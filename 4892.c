#include <stdio.h>

int main(void) {
	int n;
	for (int i=1; ; i++) {
		scanf("%d", &n);
		if (n==0) return 0;
		printf("%d. ", i);
		if (n%2==1)	printf("odd %d\n", (n-1)/2);
		else printf("even %d\n", n/2);
	}
}
