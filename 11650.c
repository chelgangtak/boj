#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point;

Point a[100000];

int cmp(const void *a, const void *b) {
	Point *pa, *pb;
	pa=(Point*)a;
	pb=(Point*)b;
	if (pa->x < pb->x) return -1;
	else if (pa->x > pb->x) return 1;
	else {
		if (pa->y < pb->y) return -1;
		else if (pa->y > pb->y) return 1;
		else return 0;
	}
}

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	qsort(a, N, sizeof(Point), cmp);
	for (int i=0; i<N; i++) printf("%d %d\n", a[i].x, a[i].y);
	return 0;
}
