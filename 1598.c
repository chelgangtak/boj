#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", abs((a-1)/4-(b-1)/4)+abs((a-1)%4-(b-1)%4));
	return 0;
}
