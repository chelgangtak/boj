#include <stdio.h>

int main(void) {
	int n;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		while (n>=10) {
			int t=n;
			int sum=0;
			while (t>0) {
				sum+=t%10;
				t/=10;
			}
			n=sum;
		}
		printf("%d\n", n);
	}
}
