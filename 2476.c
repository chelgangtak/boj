#include <stdio.h>

int main(void) {
	int N, a, b, c, m, t, ans;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a==b && b==c && c==a) t=10000+a*1000;
		else if (a==b) t=1000+a*100;
		else if (b==c) t=1000+b*100;
		else if (c==a) t=1000+c*100;
		else {
			m=a;
			if (b>m) m=b;
			if (c>m) m=c;
			t=m*100;
		}
		if (i==0) ans=t;
		else if (t>ans) ans=t;
	}
	printf("%d\n", ans);
	return 0;
}
