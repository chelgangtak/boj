#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, y;
} Point;

long prod(Point a, Point b) {
	return (long)a.x*b.x+(long)a.y*b.y;
}

long size(Point a) {
	return (long)a.x*a.x+(long)a.y*a.y;
}

int cmp(const void *a, const void *b) {
	Point *pa=(Point*)a, *pb=(Point*)b;
	long sa=size(*pa), sb=size(*pb);
	if (sa<sb) return -1;
	else if (sa>sb) return 1;
	else return 0;
}

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int x, y, f=0;
		Point vec[3];
		scanf("%d %d", &x, &y);
		for (int i=0; i<3; i++) {
			scanf("%d %d", &vec[i].x, &vec[i].y);
			vec[i].x-=x;
			vec[i].y-=y;
		}
		qsort(vec, 3, sizeof(Point), cmp);
		if (size(vec[0])!=size(vec[1])) f=1;
		else if (size(vec[2])!=2*size(vec[0])) f=1;
		else if (prod(vec[0], vec[1])!=0) f=1;
		else if (prod(vec[0], vec[2])!=size(vec[0])) f=1;
		printf("%d\n", 1-f);
	}
	return 0;
}
