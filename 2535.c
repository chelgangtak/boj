#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int country;
	int student;
	int score;
} A;

int cmp(const void *a, const void *b) {
	A *pa=(A*)a, *pb=(A*)b;
	if (pa->score < pb->score) return 1;
	else if (pa->score > pb->score) return -1;
	else return 0;
}

int main(void) {
	int N;
	A a[100];
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%d %d %d", &a[i].country, &a[i].student, &a[i].score);
	qsort(a, N, sizeof(A), cmp);
	printf("%d %d\n%d %d\n", a[0].country, a[0].student, a[1].country, a[1].student);
	if (a[0].country==a[1].country&&a[1].country==a[2].country) printf("%d %d\n", a[3].country, a[3].student);
	else printf("%d %d\n", a[2].country, a[2].student);
	return 0;
}
