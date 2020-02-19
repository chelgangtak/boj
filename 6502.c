#include <stdio.h>

int main(void) {
	int r, w, l;
	for (int i=1; ; i++) {
		scanf("%d", &r);
		if (r==0) return 0;
		scanf("%d %d", &w, &l);
		if (w*w+l*l<=4*r*r) printf("Pizza %d fits on the table.\n", i);
		else printf("Pizza %d does not fit on the table.\n", i);
	}
}
