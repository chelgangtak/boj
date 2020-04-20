#include <stdio.h>

int N, M, K, ans=10000;
int a[50][50], tmp[50][50], order[6];

typedef struct {
	int r;
	int c;
	int s;
} Node;

Node b[6];

void copy() {
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) tmp[i][j]=a[i][j];
	}
}

void rotate(int r, int c, int s) {
	int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
	for (int z=s; z>0; z--) {
		int t=tmp[r-z][c-z];
		int i=r-z;
		int j=c-z;
		for (int d=0; d<4; d++) {
			for (int x=0; x<2*z; x++) {
				int nexti=i+dir[d][0];
				int nextj=j+dir[d][1];
				if (d==3&&x==2*z-1) {
					tmp[i][j]=t;
					continue;
				}
				tmp[i][j]=tmp[nexti][nextj];
				i=nexti;
				j=nextj;
			}
		}
	}
}

int value() {
	int r=10000;
	for (int i=0; i<N; i++) {
		int sum=0;
		for (int j=0; j<M; j++) sum+=tmp[i][j];
		if (sum<r) r=sum;
	}
	return r;
}

void swap(int *a, int *b) {
	int t=*a;
	*a=*b;
	*b=t;
}

void permutation(int start, int end) {
	if (start==end) {
		copy();
		for (int i=0; i<K; i++) rotate(b[order[i]].r, b[order[i]].c, b[order[i]].s);
		int t=value();
		if (t<ans) ans=t;
		return;
	}
	for (int i=start; i<=end; i++) {
		swap(&order[start], &order[i]);
		permutation(start+1, end);
		swap(&order[start], &order[i]);
	}
}

int main(void) {
	scanf("%d %d %d", &N, &M, &K);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) scanf("%d", &a[i][j]);
	}
	for (int i=0; i<K; i++) {
		scanf("%d %d %d", &b[i].r, &b[i].c, &b[i].s);
		b[i].r--;
		b[i].c--;
		order[i]=i;
	}
	permutation(0, K-1);
	printf("%d\n", ans);
	return 0;
}
