#include <stdio.h>

int main(void) {
	int N, i, j;
	scanf("%d", &N);
	for (i=1; i<=N; i++) {
		for (j=1; j<=N-i; j++) printf(" ");
		if (i==1) printf("*");
		else if (i==N) {
			for (j=1; j<=2*i-1; j++) printf("*");
		}
		else {
			printf("*");
			for (j=1; j<=2*i-3; j++) printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
