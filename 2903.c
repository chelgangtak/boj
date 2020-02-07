#include <stdio.h>
#include <math.h>

int main(void) {
	double N;
	scanf("%lf", &N);
	printf("%d\n", (int)pow(pow(2, N)+1, 2));
	return 0;
}
