#include <stdio.h>

int main(void) {
	long a, b, ans=1;
	scanf("%ld %ld", &a, &b);
	for (long k=a; k<=b; k++) {
		ans=ans*k*(k+1)/2%14579;
	}
	printf("%ld\n", ans);
	return 0;
}
