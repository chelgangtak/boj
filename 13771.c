#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	float *pa=(float*)a, *pb=(float*)b;
	if (*pa < *pb) return -1;
	else if (*pa > *pb) return 1;
	else return 0;
}

int main(void) {
	int N;
	float a[100];
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%f", &a[i]);
	qsort(a, N, sizeof(float), cmp);
	printf("%.2f\n", a[1]);
	return 0;
}
