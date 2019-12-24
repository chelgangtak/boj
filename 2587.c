#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa < *pb) return -1;
	else if (*pa > *pb) return 1;
	else return 0;
}

int n[5];
int main(void) {
	int avg=0;
	for (int i=0; i<5; i++) {
		scanf("%d", &n[i]);
		avg+=n[i];
	}
	avg=avg/5;
	qsort(n, 5, sizeof(int), cmp);
	printf("%d\n%d\n", avg, n[2]);
	return 0;
}
