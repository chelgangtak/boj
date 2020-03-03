#include <stdio.h>

int main(void) {
	int n;
	while(1) {
		scanf("%d", &n);
		if (n==-1) return 0;
		int s, t, prev=0, sum=0;
		for (int i=0; i<n; i++) {
			scanf("%d %d", &s, &t);
			sum+=s*(t-prev);
			prev=t;
		}
		printf("%d miles\n", sum);
	}
	return 0;
}
