#include <stdio.h>

int main(void) {
	int a, d, t;
	while(1) {
		scanf("%d %d %d", &a, &d, &t);
		if (a==0&&d==0&&t==0) return 0;
		if ((t-a)%d==0 && (t-a)/d>=0) printf("%d\n", (t-a)/d+1);
		else printf("X\n");
	}
}
