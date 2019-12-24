#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int x, y;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	if (b%c==0) x=b/c;
	else x=b/c+1;
	if (d%a==0) y=d/a;
	else y=d/a+1;
	if(x>y) printf("PLAYER A\n");
	else if (x<y) printf("PLAYER B\n");
	else printf("DRAW\n");
	return 0;
}
