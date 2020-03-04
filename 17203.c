#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, Q, a[1001];
	scanf("%d %d", &N, &Q);
	for (int i=1; i<=N; i++) scanf("%d", &a[i]);
	for (int i=0; i<Q; i++) {
		int s, e, sum=0;
		scanf("%d %d", &s, &e);
		for (int j=s; j<e; j++) sum+=abs(a[j]-a[j+1]);
		printf("%d\n", sum);
	}
	return 0;
}
