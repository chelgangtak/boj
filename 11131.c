#include <stdio.h>

int main(void) {
	int T, N, sum, w;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		sum=0;
		for (int i=0; i<N; i++) {
			scanf("%d", &w);
			sum+=w;
		}
		if (sum==0) printf("Equilibrium\n");
		else if (sum<0) printf("Left\n");
		else printf("Right\n");	
	}
	return 0;
}
