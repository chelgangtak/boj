#include <stdio.h>

int f(double x) {
	if ((int)(x*10)%10>=5) return (int)x+1;
	else return (int)x;
}

int main(void) {
	double T;
	scanf("%lf", &T);
	printf("%d\n", f(T*T/4));
	return 0;
}
