#include <stdio.h>

int main(void) {
	int N, c, max, a;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		if (i==0) {
			max=a;
			c=a;
		}
		else if (a>=max) {
			max=a;
		}
	}
	if (max>c) printf("N\n");
	else printf("S\n");
	return 0;
}
