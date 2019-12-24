#include <stdio.h>

int abs(int x) {
	if (x<0) return -x;
	else return x;
}

int main(void) {
	int A, B, N, C, min;
	scanf("%d %d", &A, &B);
	min=abs(A-B);
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &C);
		if (abs(C-B)+1<min) min=abs(C-B)+1;	
	}
	printf("%d\n", min);
	return 0;
}
