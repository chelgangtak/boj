#include <stdio.h>

int main(void) {
	int K, N, T, t=0, ans;
	char Z;
	scanf("%d", &K);
	K--;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %c", &T, &Z);
		t+=T;
		if (t>=210) break;
		if (Z=='T') K=(K+1)%8;
	}
	printf("%d\n", K+1);
	return 0;
}
