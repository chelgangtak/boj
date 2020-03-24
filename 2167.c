#include <stdio.h>

int main(void) {
	int a[300][300], b[300][300], N, M, K, I, J, X, Y;
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%d", &a[i][j]);
			b[i][j]=a[i][j];
			if (i>0) b[i][j]+=b[i-1][j];
			if (j>0) b[i][j]+=b[i][j-1];
			if (i>0&&j>0) b[i][j]-=b[i-1][j-1];
		}
	}
	scanf("%d", &K);
	for (int k=0; k<K; k++) {
		scanf("%d %d %d %d", &I, &J, &X, &Y);
		I--; J--; X--; Y--;
		int ans=b[X][Y];
		if (I>0) ans-=b[I-1][Y];
		if (J>0) ans-=b[X][J-1];
		if (I>0&&J>0) ans+=b[I-1][J-1];
		printf("%d\n", ans);
	}
	return 0;
}
