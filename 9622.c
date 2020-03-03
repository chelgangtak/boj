#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	float *pa=(float*)a, *pb=(float*)b;
	if (*pa < *pb) return -1;
	else if (*pa > *pb) return 1;
	else return 0;
}

int main(void) {
	int T, cnt=0;
	float a[4];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		for (int i=0; i<4; i++) scanf("%f", &a[i]);
		qsort(a, 4, sizeof(float), cmp);
		if (a[0]>7||a[1]>25||a[2]>45||a[3]>56) {
			if (a[0]>7||a[1]+a[2]+a[3]>125) {
				printf("0\n");
				continue;
			}
		}
		cnt++;
		printf("1\n");
	}
	printf("%d\n", cnt);
	return 0;
}
