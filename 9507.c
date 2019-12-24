#include <stdio.h>

long int a[68];

int main(void) {
	int t, n;
	
	a[0]=1;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	for (int i=4; i<=67; i++) {
		a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
	}

	scanf("%d", &t);
	for (int i=0; i<t; i++) {
		scanf("%d", &n);
		printf("%ld\n", a[n]);
	}
	return 0;
}
