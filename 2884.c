#include <stdio.h>

int main(void) {
	int H, M, a;
	scanf("%d %d", &H, &M);
	a=H*60+M;
	a-=45;
	if (a<0) a+=24*60;
	printf("%d %d\n", a/60, a%60);
	return 0;
}
