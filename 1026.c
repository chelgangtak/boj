#include <stdio.h>
#include <stdlib.h>

int a[50], b[50];

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa < *pb) return -1;
	else if (*pa > *pb) return 1;
	else return 0;
}

int cmp2(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa < *pb) return 1;
	else if (*pa > *pb) return -1;
	else return 0;
}

int main(void) {
	int N, sum=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%d", &a[i]);
	for (int i=0; i<N; i++) scanf("%d", &b[i]);
	qsort(b, N, sizeof(int), cmp);
	qsort(a, N, sizeof(int), cmp2);
	for (int i=0; i<N; i++) sum+=a[i]*b[i];
	printf("%d\n", sum);
	return 0;
}
