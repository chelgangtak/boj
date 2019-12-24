#include <stdio.h>

int main(void) {
	int n, max, a, ans=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a);
		ans+=a;
		if (i==0) max=a;
		else if (a>max) max=a;
	}
	printf("%d\n", ans-max);
	return 0;
}
