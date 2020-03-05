#include <stdio.h>

int main(void) {
	int N, a, ans;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		if (i==0||a>ans) ans=a;
	}
	printf("%d\n", ans);
	return 0;
}
