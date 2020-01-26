#include <stdio.h>

int a[128][128], cnt[2]={0,0};

void f(int R, int C, int N) {
	if (N==1) {
		cnt[a[R][C]]++;
		return;
	}
	int color, flag;
	for (int k=0; k<4; k++) {
		flag=1;
		int r=R+(k/2)*(N/2);
		int c=C+(k%2)*(N/2);
		for (int i=0; i<N/2; i++) {
			for (int j=0; j<N/2; j++) {
				if (i==0&&j==0) color=a[r+i][c+j];
				else if (a[r+i][c+j]!=color) {
					flag=0;
					break;
				}
			}
			if (flag==0) break;
		}
		if (flag==0) f(r, c, N/2);
		else cnt[color]++;
	}
}

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) scanf("%d", &a[i][j]);
	}
	f(0, 0, N);
	printf("%d\n%d\n", cnt[0], cnt[1]);
	return 0;
}
