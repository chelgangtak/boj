#include <stdio.h>

int main(void) {
	int N, a, b, c;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		printf("%d %d %d ", a, b, c);
		if (a+b+c==180) printf("Seems OK\n");
		else printf("Check\n");
	}
	return 0;
}
