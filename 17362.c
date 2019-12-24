#include <stdio.h>

int main(void) {
	int n, q, r;
	scanf("%d", &n);
	q=(n-1)/4;
	r=(n-1)%4;
	if (q%2==0) printf("%d\n", 1+r);
	else printf("%d\n", 5-r);
	return 0;
}
