#include <stdio.h>

int f(int x) {
	if (x<0) return -x;
	else return x;
}

int main(void) {
	int X, Y, N, x, y, min, ax, ay;
	scanf("%d %d", &X, &Y);
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &x, &y);
		int d=f(X-x)+f(Y-y);
		if (i==0||d<min) {
			min=d;
			ax=x;
			ay=y;
		}
	}
	printf("%d %d\n", ax, ay);
	return 0;
}
