#include <stdio.h>
#include <stdlib.h>

int r, c, k, A[101][101], R=3, C=3;

typedef struct {
	int num;
	int cnt;
} FREQ;

int cmp(const void *a, const void *b) {
	FREQ *pa=(FREQ*)a, *pb=(FREQ*)b;
	if (pa->cnt < pb->cnt) return -1;
	else if (pa->cnt > pb->cnt) return 1;
	else if (pa->num < pb-> num) return -1;
	else return 1;
}

int ROW(int row) {
	int v[101]={0,}, n=0;
	FREQ f[101];
	for (int j=1; j<=C; j++) {
		if (A[row][j]==0) continue;
		v[A[row][j]]++;
	}
	for (int i=1; i<=100; i++) {
		if (v[i]>0) {
			f[n].num=i;
			f[n].cnt=v[i];
			n++;
		}
	}
	qsort(f, n, sizeof(FREQ), cmp);
	int j;
	for (int i=0; i<n; i++) {
		j=2*i+1;
		if (j>100) {
			j=100;
			break;
		}
		A[row][j++]=f[i].num;
		A[row][j]=f[i].cnt;
	}
	return j;
}

int COL(int col) {
	int v[101]={0,}, n=0;
	FREQ f[101];
	for (int i=1; i<=R; i++) {
		if (A[i][col]==0) continue;
		v[A[i][col]]++;
	}
	for (int i=1; i<=100; i++) {
		if (v[i]>0) {
			f[n].num=i;
			f[n].cnt=v[i];
			n++;
		}
	}
	qsort(f, n, sizeof(FREQ), cmp);
	int j;
	for (int i=0; i<n; i++) {
		j=2*i+1;
		if (j>100) {
			j=100;
			break;
		}
		A[j++][col]=f[i].num;
		A[j][col]=f[i].cnt;
	}
	return j;
}

int main(void) {
	scanf("%d %d %d", &r, &c, &k);
	for (int i=1; i<=3; i++) {
		for (int j=1; j<=3; j++) scanf("%d", &A[i][j]);
	}
	if (A[r][c]==k) {
		printf("0\n");
		return 0;
	}
	for (int t=1; t<=100; t++) {
		if (R>=C) {
			int col[101], tempC;
			for (int i=1; i<=R; i++) {
				col[i]=ROW(i);
				if (i==1) tempC=col[i];
				else if (col[i]>tempC) tempC=col[i];
			}
			C=tempC;
			for (int i=1; i<=R; i++) {
				for (int j=col[i]+1; j<=C; j++) A[i][j]=0;
			}
		}
		else {
			int row[101], tempR;
			for (int j=1; j<=C; j++) {
				row[j]=COL(j);
				if (j==1) tempR=row[j];
				else if (row[j]>tempR) tempR=row[j];
			}
			R=tempR;
			for (int j=1; j<=C; j++) {
				for (int i=row[j]+1; i<=R; i++) A[i][j]=0;
			}
		}
		if (A[r][c]==k) {
			printf("%d\n", t);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
