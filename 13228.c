#include <stdio.h>

int f(int x) {
	if (x<0) return -x;
	else return x;
}

int main(void) {
	int T, x1, y1, z1, x2, y2, z2;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
		printf("%d\n", f(x1-x2)+f(y1-y2)+z1+z2);
	}
	return 0;
}
