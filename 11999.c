#include <stdio.h>

int main(void) {
	int X, Y, M, max=0;
	scanf("%d %d %d", &X, &Y, &M);
	for (int x=0; x<=M; x+=X) {
		for (int y=0; ; y+=Y) {
			if (x+y>M) break;
			if (x+y>max) max=x+y;
		}
	}
	printf("%d\n", max);
	return 0;
}
