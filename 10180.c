#include <stdio.h>

int main(void) {
	int T, N, D, v, f, c, ans;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		ans=0;
		scanf("%d %d", &N, &D);
		for (int i=0; i<N; i++) {
			scanf("%d %d %d", &v, &f, &c);
			if ((double)D/v*c<=f) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
