#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	char s[3];
	double c;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%s = %lf", s, &c);
		if (s[0]=='H') printf("%.2lf\n", (-1)*log10(c));
		else printf("%.2lf\n", 14+log10(c));
	}
	return 0;
}
