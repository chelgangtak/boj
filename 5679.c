#include <stdio.h>

int main(void) {
	int n;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		int max=n;
		while(n>1) {
			if (n%2==1) n=n*3+1;
			else n=n/2;
			if (n>max) max=n;
		}
		printf("%d\n", max);
	}
}
