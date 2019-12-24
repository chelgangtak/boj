#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	int tmp=N;
	for (int i=2; tmp>1; i++) {
		while (tmp%i==0) {
			printf("%d\n", i);
			tmp=tmp/i;
		}
	}
	return 0;
}
