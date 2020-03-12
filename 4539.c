#include <stdio.h>

int banolim(int x, int a) {
	int r=x%a/(a/10);
	if (r>=5) return (x/a+1)*a;
	else return x/a*a;
}

int main(void) {
	int n, x;
	scanf("%d", &n);
	for (int t=0; t<n; t++) {
		scanf("%d", &x);
		int a=10;
		while (x>a) {
			x=banolim(x, a);
			a*=10;
		}
		printf("%d\n", x);
	}
	return 0;
}
