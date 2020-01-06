#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa<*pb) return -1;
	else if (*pa>*pb) return 1;
	else return 0;
}

int max(int a, int b) {
	if (a>b) return a;
	else return b;
}

int main(void) {
	int x[4], y[4], a;
	scanf("%d %d %d %d", &x[0], &y[0], &x[1], &y[1]);
	scanf("%d %d %d %d", &x[2], &y[2], &x[3], &y[3]);
	qsort(x, 4, sizeof(int), cmp);
	qsort(y, 4, sizeof(int), cmp);
	a=max(x[3]-x[0], y[3]-y[0]);
	printf("%d\n", a*a);
	return 0;
}
