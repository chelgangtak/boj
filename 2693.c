#include <stdio.h>
#include <stdlib.h>

int a[10];

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa < *pb) return -1;
	else if (*pa > *pb) return 1;
	else return 0;
}

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		for (int i=0; i<10; i++) scanf("%d", &a[i]);
		qsort(a, 10, sizeof(int), cmp);
		printf("%d\n", a[7]);
	}
	return 0;
}
