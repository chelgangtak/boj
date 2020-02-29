#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int W, C;
} A;

A a[100];

int cmp(const void *a, const void *b) {
	A *pa=(A*)a, *pb=(A*)b;
	float x=((float)(pa->W))/(pa->C);
	float y=((float)(pb->W))/(pb->C);
	if (x==y) {
		if (pa->C < pb->C) return -1;
		else if (pa->C > pb->C) return 1;
		else return 0;
	}
	else if (x>y) return -1;
	else return 1;
}

int main(void) {
	int T, N;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		for (int i=0; i<N; i++) scanf("%d %d", &a[i].W, &a[i].C);
		qsort(a, N, sizeof(A), cmp);
		printf("%d\n", a[0].C);
	}
	return 0;
}
