#include <stdio.h>

int banolim(int n, int a) {
	int r=n%a/(a/10);
	if (r>=5) return (n/a+1)*a;
	else return n/a*a;
}

int main(void) {
	int a=10, n;
	scanf("%d", &n);
	while (n>a) {
		n=banolim(n, a);
		a*=10;
	}
	printf("%d\n", n);
	return 0;
}
