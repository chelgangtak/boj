#include <stdio.h>

int main(void) {
	long int a, b;
	while(1) {
		scanf("%ld %ld", &a, &b);
		if (a==0&&b==0) return 0;
		printf("%ld\n", 2*a-b);	
	}
}
