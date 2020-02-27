#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	while (N>=2) {
		if (N%2==1) {
			printf("0\n");
			return 0;
		}
		N/=2;
	}
	printf("1\n");
	return 0;
}
