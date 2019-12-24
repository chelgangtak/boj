#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char n[11];
	int k;
	int e;
	int m;
} Student;

Student s[100000];

int cmp(const void *a, const void *b) {
	Student *pa=(Student*)a, *pb=(Student*)b;
	if (pa->k > pb->k) return -1;
	else if (pa->k < pb->k) return 1;
	else {
		if (pa->e < pb->e) return -1;
		else if (pa->e > pb->e) return 1;
		else {
			if (pa->m > pb->m) return -1;
			else if (pa->m < pb->m) return 1;
			else return strcmp(pa->n, pb->n);
		}
	}
}

int main(void) {
	int N;
	char tmp[50];
	scanf("%d", &N);
	getchar();
	for (int i=0; i<N; i++) {
		fgets(tmp, sizeof(tmp), stdin);
		sscanf(tmp, "%s %d %d %d", s[i].n, &s[i].k, &s[i].e, &s[i].m);
	}
	qsort(s, N, sizeof(Student), cmp);
	for (int i=0; i<N; i++) printf("%s\n", s[i].n);
	return 0;
}
