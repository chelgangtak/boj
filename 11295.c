#include <stdio.h>

int main(void) {
	int L, N, a;
	for (int t=1; ; t++) {
		scanf("%d", &L);
		if (L==0) return 0;
		printf("User %d\n", t);
		scanf("%d", &N);
		for (int i=0; i<N; i++) {
			scanf("%d", &a);
			printf("%.5lf\n", (double)a*L/100000);
		}
	}
}
