#include <stdio.h>

int main(void) {
	int D, H, M, start, end;
	start=11*60+11;
	scanf("%d %d %d", &D, &H, &M);
	end=(D-11)*24*60+H*60+M;
	if (end<start) printf("-1\n");
	else printf("%d\n", end-start);
	return 0;
}
