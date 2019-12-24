#include <stdio.h>

long int a[1001];

double avg(int k, int i) {
	double sum=0;
	for (int j=i; j<=i+k-1; j++) sum+=a[j];
	return sum/k;
}

double f(int k, int i) {
	double m=avg(k, i);
	double sum=0;
	for (int j=i; j<=i+k-1; j++) {
		sum+=(a[j]-m)*(a[j]-m);
	}
	return sum;
}

int main(void) {
	int N, ans;
	scanf("%d", &N);
	for (int i=1; i<=N; i++) {
		scanf("%ld", &a[i]);
	}
	for (int k=1; k<=N; k++) {
		double max=-1;
		for (int i=1; i+k-1<=N; i++) {
			double d=f(k, i);
			if (max<d) {
				max=d;
				ans=i;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
