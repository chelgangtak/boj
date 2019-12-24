#include <stdio.h>

int a[1000001], n[1000001];

int main(void) {
	int N, max;
	scanf("%d", &N);
	a[1]=0;
	for (int i=2; i<=N; i++) {
		max=i-1;
		if (i%3==0 && a[i/3]<=a[max]) max=i/3;
		if (i%2==0 && a[i/2]<=a[max]) max=i/2;
		if (max==i/3) {
			a[i]=a[i/3]+1;
			n[i]=i/3;
		}
		else if (max==i/2) {
			a[i]=a[i/2]+1;
			n[i]=i/2;
		}
		else {
			a[i]=a[i-1]+1;
			n[i]=i-1;
		}
	}
	printf("%d\n", a[N]);
	printf("%d", N);
	for (int i=n[N]; i>=1; i=n[i]) printf(" %d", i);
	printf("\n");
	return 0;
}
