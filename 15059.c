#include <stdio.h>

int main(void) {
	int a, b, c, A, B, C, ans=0;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &A, &B, &C);
	if (a<A) ans+=(A-a);
	if (b<B) ans+=(B-b);
	if (c<C) ans+=(C-c);
	printf("%d\n", ans);
	return 0;
}
