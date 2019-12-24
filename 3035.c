#include <stdio.h>

int main(void) {
	int R, C, ZR, ZC;
	char c[50][50];
	scanf("%d %d %d %d", &R, &C, &ZR, &ZC);
	getchar();
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) scanf("%c", &c[i][j]);
		getchar();
	}
	for (int i=0; i<R*ZR; i++) {
		for (int j=0; j<C*ZC; j++) {
			printf("%c", c[i/ZR][j/ZC]);
		}
		printf("\n");
	}
	return 0;
}
