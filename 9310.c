#include <stdio.h>
#include <math.h>

int main(void) {
	int n, a, b, c;

	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		scanf("%d %d %d", &a, &b, &c);
		if (a+c==2*b) printf("%d\n", n*(2*a+(n-1)*(b-a))/2);
		else printf("%d\n", a*((int)pow(b/a,n)-1)/(b/a-1));
	}
}
