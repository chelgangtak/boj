#include <stdio.h>

int main(void) {
	long int sum=0, squaresum=0;
	int n, a;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a);
		sum+=a;
		squaresum+=a*a;
	}
	printf("%ld\n", (sum*sum-squaresum)/2);
	return 0;
}
