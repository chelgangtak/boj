#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2, x3, y3;
	double a;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	a=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	if (a>0) printf("1\n");
	else if (a<0) printf("-1\n");
	else printf("0\n");
	return 0;
}
