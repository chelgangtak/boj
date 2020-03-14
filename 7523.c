#include <stdio.h>

int main(void) {
	int T;
	long n, m;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%ld %ld", &n, &m);
		if (t>0) printf("\n");
		printf("Scenario #%d:\n%ld\n", t+1, (m-n+1)*(n+m)/2);
	}
	return 0;
}
