#include <stdio.h>

int main(void) {
	int N, K, S, Y, a[7][2]={{0,0},}, ans=0;
	scanf("%d %d", &N, &K);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &S, &Y);
		a[Y][S]++;
	}
	for (int i=1; i<=6; i++) {
		for (int j=0; j<2; j++) {
			ans+=a[i][j]/K;
			if (a[i][j]%K!=0) ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
