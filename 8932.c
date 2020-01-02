#include <stdio.h>
#include <math.h>

int main(void) {
	int T, total;
	double p, A[7]={9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193}, B[7]={26.7, 75, 1.5, 42.5, 210, 3.8, 254}, C[7]={1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};

	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		total=0;
		for (int i=0; i<7; i++) {
			scanf("%lf", &p);
			if (i==0||i==3||i==6) total+=(int)(A[i]*pow(B[i]-p, C[i]));
			else total+=(int)(A[i]*pow(p-B[i], C[i]));
		}
		printf("%d\n", total);
	}
	return 0;
}
