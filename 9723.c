#include <stdio.h>

void swap(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
}

int main(void) {
	int T, a, b, c;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a>b) swap(&a, &b);
		if (b>c) swap(&b, &c);
		if (a>b) swap(&a, &b);
		printf("Case #%d: ", t+1);
		if (a*a+b*b==c*c) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
