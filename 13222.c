#include <stdio.h>

int main(void) {
	int N, W, H, a;
	scanf("%d %d %d", &N, &W, &H);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		if (a*a<=W*W+H*H) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
