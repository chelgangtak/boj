#include <stdio.h>

int main(void) {
	int n, f[6]={1,1,2,6,24,120};
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		int sum=0;
		for (int i=1; n>0; i++) {
			sum+=n%10*f[i];
			n/=10;
		}
		printf("%d\n", sum);
	}
}
