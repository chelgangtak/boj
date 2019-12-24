#include <stdio.h>

int GCD(int n, int m) {
	int x, y, r;
	if (n>m) {
		x=n;
		y=m;
	}
	else {
		x=m;
		y=n;
	}
	do {
		r=x%y;
		x=y;
		y=r;
	} while (r>0);
	return x;
}

int main(void) {
	int n, m, gcd;
	scanf("%d:%d", &n, &m);
	gcd=GCD(n, m);
	printf("%d:%d\n", n/gcd, m/gcd);
	return 0;
}
