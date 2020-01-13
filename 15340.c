#include <stdio.h>

int min(int a, int b, int c) {
	int m=a;
	if (b<m) m=b;
	if (c<m) m=c;
	return m;
}

int main(void) {
	int c, d;
	while(1) {
		scanf("%d %d", &c, &d);
		if (c==0&&d==0) return 0;
		printf("%d\n", min(30*c+40*d, 35*c+30*d, 40*c+20*d));
	}
}
