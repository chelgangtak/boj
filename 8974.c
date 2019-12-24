#include <stdio.h>

int a[1001];

int main(void) {
	int A, B, cnt=0, n=1;
	a[0]=0;
	for (int i=1; i<=1000; i++) {
		a[i]=a[i-1]+n;
		cnt++;
		if (cnt==n) {
			cnt=0;
			n++;
		}
	}
	scanf("%d %d", &A, &B);
	printf("%d\n", a[B]-a[A-1]);
	return 0;
}
