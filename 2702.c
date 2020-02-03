#include <stdio.h>

int gcd, lcm;

void GCDLCM(int a, int b) {
	int x, y, r;
	if (a>b) {
		x=a;
		y=b;
	}
	else {
		x=b;
		y=a;
	}
	do {
		r=x%y;
		x=y;
		y=r;
	} while (r>0);
	gcd=x;
	lcm=a*b/x;
}

int main(void) {
	int T, a, b;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d", &a, &b);
		GCDLCM(a, b);
		printf("%d %d\n", lcm, gcd);
	}
	return 0;
}
