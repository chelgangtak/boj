#include <stdio.h>

int cnt;

void f(int n) {
	if (n==0) cnt++;
	while (n>0) {
		int r=n%10;
		if (r==0) cnt++;
		n/=10;
	}
}

int main(void) {
	int T, N, M;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		cnt=0;
		scanf("%d %d", &N, &M);
		for (int i=N; i<=M; i++) f(i);
		printf("%d\n", cnt);
	}
	return 0;
}
