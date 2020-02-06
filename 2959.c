#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa<*pb) return -1;
	else if (*pa>*pb) return 1;
	else return 0;
}

int main(void) {
	int a[4];
	for (int i=0; i<4; i++) scanf("%d", &a[i]);
	qsort(a, 4, sizeof(int), cmp);
	printf("%d\n", a[0]*a[2]);
	return 0;
}
