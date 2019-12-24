#include <stdio.h>

int main(void) {
	int y1, m1, d1, y2, m2, d2, t;
	scanf("%d %d %d", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	if (m1*100+d1>m2*100+d2) t=-1;
	else t=0;
	printf("%d\n%d\n%d\n", y2-y1+t, y2-y1+1, y2-y1);
	return 0;
}
