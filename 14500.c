#include <stdio.h>

int a[500][500], N, M, max=0;

void f1(int r, int c) {
	int sum[2]={0,}, m;
	if (c+3<=M-1) sum[0]=a[r][c]+a[r][c+1]+a[r][c+2]+a[r][c+3];
	if (r+3<=N-1) sum[1]=a[r][c]+a[r+1][c]+a[r+2][c]+a[r+3][c];
	m=sum[0];
	if (m<sum[1]) m=sum[1];
	if (m>max) max=m;
}

void f2(int r, int c) {
	int sum=0;
	if (r+1<=N-1&&c+1<=M-1) sum=a[r][c]+a[r+1][c]+a[r][c+1]+a[r+1][c+1];
	if (sum>max) max=sum;
}

void f3(int r, int c) {
	int sum[8]={0,}, m;
	if (r+2<=N-1&&c+1<=M-1) {
		sum[0]=a[r][c]+a[r+1][c]+a[r+2][c]+a[r+2][c+1];
		sum[1]=a[r][c]+a[r][c+1]+a[r+1][c+1]+a[r+2][c+1];
		sum[2]=a[r][c+1]+a[r+1][c+1]+a[r+2][c]+a[r+2][c+1];
		sum[3]=a[r][c]+a[r][c+1]+a[r+1][c]+a[r+2][c];
	}
	if (r+1<=N-1&&c+2<=M-1) {
		sum[4]=a[r][c]+a[r+1][c]+a[r][c+1]+a[r][c+2];
		sum[5]=a[r][c+2]+a[r+1][c]+a[r+1][c+1]+a[r+1][c+2];
		sum[6]=a[r][c]+a[r][c+1]+a[r][c+2]+a[r+1][c+2];
		sum[7]=a[r][c]+a[r+1][c]+a[r+1][c+1]+a[r+1][c+2];
	}
	for (int i=0; i<8; i++) {
		if (i==0) m=sum[i];
		else if (sum[i]>m) m=sum[i];
	}
	if (m>max) max=m;
}

void f4(int r, int c) {
	int sum[4]={0,}, m;
	if (r+2<=N-1&&c+1<=M-1) {
		sum[0]=a[r][c]+a[r+1][c]+a[r+1][c+1]+a[r+2][c+1];
		sum[1]=a[r][c+1]+a[r+1][c]+a[r+1][c+1]+a[r+2][c];
	}
	if (r+1<=N-1&&c+2<=M-1) {
		sum[2]=a[r][c+1]+a[r][c+2]+a[r+1][c]+a[r+1][c+1];
		sum[3]=a[r][c]+a[r][c+1]+a[r+1][c+1]+a[r+1][c+2];
	}
	for (int i=0; i<4; i++) {
		if (i==0) m=sum[i];
		else if (sum[i]>m) m=sum[i];
	}
	if (m>max) max=m;
}

void f5(int r, int c) {
	int sum[4]={0,}, m;
	if (r+1<=N-1&&c+2<=M-1) {
		sum[0]=a[r][c]+a[r][c+1]+a[r+1][c+1]+a[r][c+2];
		sum[1]=a[r][c+1]+a[r+1][c]+a[r+1][c+1]+a[r+1][c+2];
	}
	if (r+2<=N-1&&c+1<=M-1) {
		sum[2]=a[r][c]+a[r+1][c]+a[r+1][c+1]+a[r+2][c];
		sum[3]=a[r][c+1]+a[r+1][c]+a[r+1][c+1]+a[r+2][c+1];
	}
	for (int i=0; i<4; i++) {
		if (i==0) m=sum[i];
		else if (sum[i]>m) m=sum[i];
	}
	if (m>max) max=m;
}

int main(void) {
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) scanf("%d", &a[i][j]);
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			f1(i, j);
			f2(i, j);
			f3(i, j);
			f4(i, j);
			f5(i, j);
		}
	}
	printf("%d\n", max);
	return 0;
}
