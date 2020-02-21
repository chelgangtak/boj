#include <stdio.h>

void swap(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
}

int main(void) {
	int N, M, a[101], x, y;
	scanf("%d %d", &N, &M);
	for (int i=1; i<=N; i++) a[i]=i;
	for (int i=0; i<M; i++) {
		scanf("%d %d", &x, &y);
		swap(&a[x], &a[y]);
	}
	for (int i=1; i<=N; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}
