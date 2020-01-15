#include <stdio.h>
#include <math.h>

int main(void) {
	int N, x, y, ans=0, p;
	double d;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &x, &y);
		d=sqrt(x*x+y*y);
		p=(int)((210-d)/20);
		if (p<0) p=0;
		ans+=p;
	}
	printf("%d\n", ans);
	return 0;
}
