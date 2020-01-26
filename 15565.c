#include <stdio.h>

int main(void) {
	int N, K, a, ryan[1000000], cnt=0, min;
	scanf("%d %d", &N, &K);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		if (a==1) ryan[cnt++]=i;
	}
	if (cnt<K) {
		printf("-1\n");
		return 0;
	}
	for (int i=0; i<cnt-(K-1); i++) {
		if (i==0) min=ryan[i+K-1]-ryan[i];
		else if (ryan[i+K-1]-ryan[i]<min) min=ryan[i+K-1]-ryan[i];
	}
	printf("%d\n", min+1);
	return 0;
}
