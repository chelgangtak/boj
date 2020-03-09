#include <stdio.h>

int main(void) {
	int N, M, ans=0;
	char a[50][50];
	scanf("%d %d", &N, &M);
	getchar();
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) scanf("%c", &a[i][j]);
		getchar();
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			for (int k=0; i+k<N&&j+k<M; k++) {
				if (a[i][j]==a[i+k][j]&&a[i+k][j]==a[i][j+k]&&a[i][j+k]==a[i+k][j+k]) {
					if (k>ans) ans=k;
				}
			}
		}
	}
	printf("%d\n", (ans+1)*(ans+1));
	return 0;
}
