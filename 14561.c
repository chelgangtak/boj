#include <stdio.h>

int main(void) {
	int T, n, d[50], k=0, s;
	long int A;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%ld %d", &A, &n);
		k=0;
		while (A>0) {
			d[k++]=A%n;
			A/=n;
		}
		s=1;
		for (int i=0; i<k-1-i; i++) {
			if (d[i]!=d[k-1-i]) {
				s=0;
				break;
			}
		}
		if (s==0) printf("0\n");
		else printf("1\n");
	}
	return 0;
}
