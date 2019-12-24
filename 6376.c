#include <stdio.h>

int main(void) {
	printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n");
	long int fac=2;
	double ans=2.5;
	for (int i=3; i<=9; i++) {
		fac*=i;
		ans+=(double)1/fac;
		printf("%d %.9lf\n", i, ans);
	}
	return 0;
}
