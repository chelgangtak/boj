#include <stdio.h>

long long sum(int *a, int n) {
	long long s=0;
	for (int i=0; i<n; i++) s+=a[i];
	return s;
}

int main(void) {
	int n, a[300000];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%lld\n", sum(a, n));
	return 0;
}
