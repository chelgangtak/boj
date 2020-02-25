#include <stdio.h>

int main(void) {
	int n, p;
	scanf("%d", &n);
	for (int i=0; ; i++) {
		if (n<10) {
			printf("%d\n", i);
			return 0;
		}
		p=1;
		while(n>0) {
			p*=n%10;
			n/=10;
		}
		n=p;
	}
}
