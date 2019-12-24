#include <stdio.h>

int main(void) {
	int N, a[1000], s, ans=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%d", &a[i]);
	s=0;
	for (int i=1; i<N; i++) {
		if (a[i]>a[i-1]) continue;
		if (a[i-1]-a[s]>ans) ans=a[i-1]-a[s];
		s=i;
	}
	if (a[N-1]-a[s]>ans) ans=a[N-1]-a[s];
	printf("%d\n", ans);
	return 0;	
}
