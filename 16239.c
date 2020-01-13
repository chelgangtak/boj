#include <stdio.h>

int main(void) {
	int S, n, a[100];
	double d;
	scanf("%d %d", &S, &n);
	for (int i=0; i<n; i++) {
		a[i]=i+1;
		S-=i+1;
	}
	a[n-1]+=S;
	for (int i=0; i<n; i++) printf("%d\n", a[i]);
	return 0;
}
