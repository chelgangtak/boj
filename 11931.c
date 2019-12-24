#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa < *pb) return 1;
	else if (*pa > *pb) return -1;
	else return 0;
}

int main(void) {
	int N, a[1000000];
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%d", &a[i]);
	qsort(a, N, sizeof(int), cmp);
	for (int i=0; i<N; i++) printf("%d\n", a[i]);
	return 0;
}
