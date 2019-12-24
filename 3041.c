#include <stdio.h>
#include <math.h>

int abs(int x) {
	if (x<0) return -x;
	else return x;
}

int main(void) {
	char a;
	int b=0;
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			scanf("%c", &a);
			if (a=='.') continue;
			else b+=abs(i-(a-'A')/4)+abs(j-(a-'A')%4);
		}
		getchar();
	}
	printf("%d\n", b);
	return 0;
}
