#include <stdio.h>

int main(void) {
	int a[50], k;
	long long N;
	scanf("%lld", &N);
	for (k=0; N>0; k++) {
		a[k]=(int)(N%2);
		N/=2;
	}
	for (int i=k-1; i>=0; i--) printf("%d", a[i]);
	printf("\n");
	return 0;
}
