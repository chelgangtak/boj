#include <stdio.h>

int main(void) {
	int T, a, b;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d", &a, &b);
		printf("Case %d: ", t+1);
		int c=a/b;
		int d=a%b;
		if (c==0&&d==0) printf("0\n");
		else {
			if (c!=0) printf("%d ", c);
			if (d!=0) printf("%d/%d", d, b);
			printf("\n");
		}
	}
	return 0;
}
