#include <stdio.h>
int main(void) {
	int N;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		for (int j=1; j<=i; j++) printf(" ");
		for (int j=1; j<=2*N-1-2*i; j++) printf("*");
		printf("\n");
	}
	return 0;
}
