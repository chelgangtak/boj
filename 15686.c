#include <stdio.h>

typedef struct {
	int r, c;
} Point;

int N, M, map[51][51], hn=0, cn=0, v[13], sum, ans, first=1;
Point home[2500], chicken[13];

int abs(int x) {
	if (x<0) return -x;
	else return x;
}

void cal() {
	sum=0;
	for (int i=0; i<hn; i++) {
		int min=1000;
		for (int j=0; j<cn; j++) {
			if (v[j]==0) continue;
			int d=abs(home[i].r-chicken[j].r)+abs(home[i].c-chicken[j].c);
			if (d<min) min=d;
		}
		sum+=min;
	}
}

void f(int idx, int r) {
	if (r==0) {
		cal();
		if (first==1) {
			ans=sum;
			first=0;
		}
		else if (sum<ans) ans=sum;
		return;
	}
	if (idx==cn) return;
	v[idx]=1;
	f(idx+1, r-1);
	v[idx]=0;
	f(idx+1, r);
}

int main(void) {
	scanf("%d %d", &N, &M);
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j]==1) {
				home[hn].r=i;
				home[hn].c=j;
				hn++;
			}
			else if (map[i][j]==2) {
				chicken[cn].r=i;
				chicken[cn].c=j;
				cn++;
			}
		}
	}
	for (int i=1; i<=M; i++) {
		f(0, i);
	}
	printf("%d\n", ans);
	return 0;
}
