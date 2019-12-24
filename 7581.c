#include <stdio.h>

int main(void) {
	int l, w, h, v;
	while(1) {
		scanf("%d %d %d %d", &l, &w, &h, &v);
		if (l+w+h+v==0) return 0;
		if (v==0) printf("%d %d %d %d\n", l, w, h, l*w*h);
		else if (l==0) printf("%d %d %d %d\n", v/w/h, w, h, v);
		else if (w==0) printf("%d %d %d %d\n", l, v/l/h, h, v);
		else if (h==0) printf("%d %d %d %d\n", l, w, v/l/w, v);
	}
}
