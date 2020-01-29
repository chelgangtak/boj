#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int Y=0, K=0, y, k;
		for (int i=1; i<=9; i++) {
			scanf("%d %d", &y, &k);
			Y+=y;
			K+=k;
		}
		if (Y>K) printf("Yonsei\n");
		else if (Y<K) printf("Korea\n");
		else printf("Draw\n");
	}
	return 0;
}
