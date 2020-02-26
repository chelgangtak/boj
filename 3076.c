#include <stdio.h>

int main(void) {
	int R, C, A, B;
	scanf("%d %d", &R, &C);
	scanf("%d %d", &A, &B);
	for (int i=0; i<R*A; i++) {
		for (int j=0; j<C*B; j++) {
			int r=i/A;
			int c=j/B;
			if ((r+c)%2==0) printf("X");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}
