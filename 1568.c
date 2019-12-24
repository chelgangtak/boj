#include <stdio.h>

int a[44722];

int f(int n, int start) {
	if (n==0) return 0;
	for (int i=start; ;i--) {
		if (a[i]<=n) {
			return i+f(n-a[i], i);
		}
	}
}

int main(void) {
	int n;
	for (long int i=0; i<=44721; i++) a[i]=i*(i+1)/2;
	scanf("%d", &n);
	printf("%d\n", f(n, 44721));
	return 0;
}
