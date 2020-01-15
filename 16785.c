#include <stdio.h>

int main(void) {
	int A, B, C, cnt=0, i;
	scanf("%d %d %d", &A, &B, &C);
	for (i=1; cnt<C; i++) {
		cnt+=A;
		if (i%7==0) cnt+=B;
	}
	printf("%d\n", i-1);
	return 0;
}
