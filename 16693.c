#include <stdio.h>

int main(void) {
	int a, p1, r, p2;
	scanf("%d %d", &a, &p1);
	scanf("%d %d", &r, &p2);
	if ((double)p1/a<(double)p2/3.141592/r/r) printf("Slice of pizza\n");
	else printf("Whole pizza\n");
	return 0;
}
