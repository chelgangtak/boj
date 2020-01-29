#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char S[21];
	int L;
} A;

int cmp(const void *a, const void *b) {
	A *pa=(A*)a, *pb=(A*)b;
	if (pa->L<pb->L) return -1;
	else return 1;
}

int main(void) {
	int T, N;
	A a[100];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		for (int i=0; i<N; i++) {
			scanf("%s %d", a[i].S, &a[i].L);	
		}
		qsort(a, N, sizeof(A), cmp);
		printf("%s\n", a[N-1].S);
	}
	return 0;
}
