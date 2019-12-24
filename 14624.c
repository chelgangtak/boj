#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	if (N%2==0) printf("I LOVE CBNU\n");
	else {
		for (int j=1; j<=N; j++) printf("*");
		printf("\n");
		for (int i=0; i<=N/2; i++) {
			for (int j=1; j<=N/2-i; j++) printf(" ");
			printf("*");
			if (i==0) {
				printf("\n");
				continue;
			}
			for (int j=1; j<=2*i-1; j++) printf(" ");
			printf("*\n");
		}
	}
	return 0;
}
