#include <stdio.h>

int main(void) {
	int n, sum, max, k;
	for (int i=0; i<5; i++) {
		sum=0;
		for (int j=0; j<4; j++) {
			scanf("%d", &n);
			sum+=n;
		}
		if (i==0) {
			max=sum;
			k=i;
		}
		else if (sum>max) {
			max=sum;
			k=i;
		}
	}
	printf("%d %d\n", k+1, max);
	return 0;
}
