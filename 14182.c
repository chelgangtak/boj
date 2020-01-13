#include <stdio.h>

int main(void) {
	int a;
	while(1) {
		scanf("%d", &a);
		if (a==0) return 0;
		if (a<=1000000) printf("%d\n", a);
		else if (a<=5000000) printf("%d\n", a*9/10);
		else printf("%d\n", a*8/10);
	}
}
