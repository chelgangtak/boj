#include <stdio.h>

int N, M, T, sum=0, cnt;
int a[51][50];

void erase() {
	int b[51][50];
	for (int i=1; i<=N; i++) {
		for (int j=0; j<M; j++) b[i][j]=a[i][j];
	}
	for (int i=1; i<=N; i++) {
		for (int j=0; j<M; j++) {
			if (b[i][j]==0) continue;
			if (b[i][j]==b[i][(j+M-1)%M]||b[i][j]==b[i][(j+1)%M]) {
				a[i][j]=0;
				sum-=b[i][j];
				cnt--;
			}
			if ((i>1&&b[i][j]==b[i-1][j])||(i<N&&b[i][j]==b[i+1][j])) {
				if (a[i][j]==0) continue;
				a[i][j]=0;
				sum-=b[i][j];
				cnt--;
			}
		}
	}
}

int main(void) {
	scanf("%d %d %d", &N, &M, &T);
	for (int i=1; i<=N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%d", &a[i][j]);
			sum+=a[i][j];
		}
	}
	cnt=N*M;	
	for (int t=1; t<=T; t++) {
		int x, d, k;
		scanf("%d %d %d", &x, &d, &k);
		for (int i=1; i<=N; i++) {
			if (i%x!=0) continue;
			for (int j=1; j<=k; j++) {
				if (d==0) {
					int tmp=a[i][M-1];
					for (int s=M-1; s>=1; s--) a[i][s]=a[i][s-1];
					a[i][0]=tmp;
				}
				else {
					int tmp=a[i][0];
					for (int s=0; s<M-1; s++) a[i][s]=a[i][s+1];
					a[i][M-1]=tmp;
				}
			}
		}
		int tmp=sum;
		erase();
		if (tmp!=sum) continue;
		double avg=(double)sum/cnt;
		for (int i=1; i<=N; i++) {
			for (int j=0; j<M; j++) {
				if (a[i][j]==0) continue;
				if (a[i][j]<avg) {
					a[i][j]++;
					sum++;
				}
				else if (a[i][j]>avg) {
					a[i][j]--;
					sum--;
				}
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}
