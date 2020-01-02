#include <stdio.h>

int main(void) {
	int N, L, a[100][100], v[100][100], ans=0;
	scanf("%d %d", &N, &L);
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			scanf("%d", &a[i][j]);
			v[i][j]=0;
		}
	}
	for (int i=0; i<N; i++) {
		int suc=1;
		for (int j=0; j<N-1; j++) {
			if (a[i][j]==a[i][j+1]) continue;
			else if (a[i][j]==a[i][j+1]+1) {
				for (int k=0; k<L; k++) {
					if (j+1+k==N||a[i][j+1+k]!=a[i][j+1]||v[i][j+1+k]==1) {
						suc=0;
						break;
					}
				}
				if (suc==0) break;
				else {
					for (int k=0; k<L; k++) v[i][j+1+k]=1;
				}
			}
			else if (a[i][j]==a[i][j+1]-1) {
				for (int k=0; k<L; k++) {
					if (j-k<0||a[i][j-k]!=a[i][j]||v[i][j-k]==1) {
						suc=0;
						break;
					}
				}
				if (suc==0) break;
				else {
					for (int k=0; k<L; k++) v[i][j-k]=1;
				}
			}
			else {
				suc=0;
				break;
			}
		}
		if (suc==1) {
			//printf("%dth row\n", i);
			ans++;
		}
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) v[i][j]=0;
	}
	for (int j=0; j<N; j++) {
		int suc=1;
		for (int i=0; i<N-1; i++) {
			if (a[i][j]==a[i+1][j]) continue;
			else if (a[i][j]==a[i+1][j]+1) {
				for (int k=0; k<L; k++) {
					if (i+1+k==N||a[i+1+k][j]!=a[i+1][j]||v[i+1+k][j]==1) {
						suc=0;
						break;
					}
				}
				if (suc==0) break;
				else {
					for (int k=0; k<L; k++) v[i+1+k][j]=1;
				}
			}
			else if (a[i][j]==a[i+1][j]-1) {
				for (int k=0; k<L; k++) {
					if (i-k<0||a[i-k][j]!=a[i][j]||v[i-k][j]==1) {
						suc=0;
						break;
					}
				}
				if (suc==0) break;
				else {
					for (int k=0; k<L; k++) v[i-k][j]=1;
				}
			}
			else {
				suc=0;
				break;
			}
		}
		if (suc==1) {
			//printf("%dth col\n", j);
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
