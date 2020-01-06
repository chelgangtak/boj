#include <stdio.h>

int main(void) {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n2-n1>180) printf("%d\n", n2-n1-360);
	else if (n2-n1>-180) printf("%d\n", n2-n1);
	else printf("%d\n", n2-n1+360);
	return 0;
}
