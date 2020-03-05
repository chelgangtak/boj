#include <stdio.h>

int main(void) {
	int N, a, min=1000000000, sum=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		if (a!=-1) {
			if (a<min) min=a;
		}
		else {
			sum+=min;
			min=1000000000;
		}
	}
	sum+=min;
	printf("%d\n", sum);
	return 0;
}
