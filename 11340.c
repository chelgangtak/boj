#include <stdio.h>

int olim(double x) {
	if (x-(int)x<0.0000001) return (int)x;
	else return (int)x+1;
}

int main(void) {
	int T, a, b, c, ans;
	double d;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d %d", &a, &b, &c);
		d=(90-(a*0.15+b*0.2+c*0.25))*2.5;
		int ans=olim(d);
		if (ans>100) printf("impossible\n");
		else printf("%d\n", ans);
	}
	return 0;
}
