#include <stdio.h>

int main(void) {
	int N, M, i, j, k, a[101]={0,};
	scanf("%d %d" ,&N, &M);
	for (int x=0; x<M; x++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int y=i; y<=j; y++) a[y]=k;
	}
	for (int i=1; i<=N; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}
