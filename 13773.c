#include <stdio.h>

int main(void) {
	int n;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		printf("%d ", n);
		if (n<1896||n%4!=0) printf("No summer games\n");
		else if (n>2020) printf("No city yet chosen\n");
		else if (n==1916||n==1940||n==1944) printf("Games cancelled\n");
		else printf("Summer Olympics\n");
	}
}
