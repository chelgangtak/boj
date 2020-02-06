#include <stdio.h>

typedef struct {
	int r, c, l, d;
} MAL;

typedef struct {
	int col;
	int size;
	int level[10];
} BOARD;

MAL mal[11];
BOARD a[13][13];
int N, K;

int main(void) {
	int dir[5][2]={{0,0},{0,1},{0,-1},{-1,0},{1,0}};
	scanf("%d %d", &N, &K);
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			scanf("%d", &a[i][j].col);
			a[i][j].size=0;
		}
	}
	for (int i=1; i<=K; i++) {
		scanf("%d %d %d", &mal[i].r, &mal[i].c, &mal[i].d);
		BOARD *b=&a[mal[i].r][mal[i].c];
		b->level[b->size]=i;
		mal[i].l=b->size;
		(b->size)++;
	}
	for (int t=1; t<=1000; t++) {
		for (int i=1; i<=K; i++) {
			int newr=mal[i].r+dir[mal[i].d][0];
			int newc=mal[i].c+dir[mal[i].d][1];
			if (newr<1||newr>N||newc<1||newc>N||a[newr][newc].col==2) {
				if (mal[i].d<=2) mal[i].d=3-mal[i].d;
				else mal[i].d=7-mal[i].d;
				newr=mal[i].r+dir[mal[i].d][0];
				newc=mal[i].c+dir[mal[i].d][1];
			}
			if (newr<1||newr>N||newc<1||newc>N||a[newr][newc].col==2) continue;
			if (a[newr][newc].col==0) {
				BOARD *b=&a[mal[i].r][mal[i].c], *newb=&a[newr][newc];
				int end=b->size;
				for (int j=mal[i].l; j<end; j++) {
					newb->level[newb->size]=b->level[j];
					mal[b->level[j]].r=newr;
					mal[b->level[j]].c=newc;
					mal[b->level[j]].l=newb->size;
					(newb->size)++;
					b->level[j]=0;
					(b->size)--;
				}
			}
			else {
				BOARD *b=&a[mal[i].r][mal[i].c], *newb=&a[newr][newc];
				int start=b->size-1, end=mal[i].l;
				for (int j=start; j>=end; j--) {
					newb->level[newb->size]=b->level[j];
					mal[b->level[j]].r=newr;
					mal[b->level[j]].c=newc;
					mal[b->level[j]].l=newb->size;
					(newb->size)++;
					b->level[j]=0;
					(b->size)--;
				}
			}
			if (a[newr][newc].size>=4) {
				printf("%d\n", t);
				return 0;
			}
		}
	}
	printf("-1\n");
	return 0;
}