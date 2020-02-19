#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa<*pb) return -1;
	else if (*pa>*pb) return 1;
	else return 0;
}

int main(void) {
	int K, N, a[50], gap;
	scanf("%d", &K);
	for (int k=0; k<K; k++) {
		scanf("%d", &N);
		for (int i=0; i<N; i++) scanf("%d", &a[i]);
		qsort(a, N, sizeof(int), cmp);
		for (int i=0; i<N-1; i++) {
			if (i==0||a[i+1]-a[i]>gap) gap=a[i+1]-a[i];
		}
		printf("Class %d\nMax %d, Min %d, Largest gap %d\n", k+1, a[N-1], a[0], gap);
	}
	return 0;
}
