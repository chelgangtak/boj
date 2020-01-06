#include <stdio.h>

int N, H, M, map[31][11]={{0,},}, v[271]={0,}, suc=-1;

void check() {
	for (int j=1; j<=N; j++) {
		int b=j;
		int a=1;
		while(a<=H) {
			if (map[a][b]==1) b++;
			else if (map[a][b]==-1) b--;
			a++;
		}
		if (b!=j) return;
	}
	suc=1;
}

void f(int *tmp, int cnt) {
	for (int i=0; i<cnt; i++) {
		int a=(tmp[i]-1)/(N-1)+1;
		int b=(tmp[i]-1)%(N-1)+1;
		if (map[a][b]!=0||map[a][b+1]!=0) return;
	}
	for (int i=0; i<cnt; i++) {
		int a=(tmp[i]-1)/(N-1)+1;
		int b=(tmp[i]-1)%(N-1)+1;
		map[a][b]=1;
		map[a][b+1]=-1;
	}
	check();
	for (int i=0; i<cnt; i++) {
		int a=(tmp[i]-1)/(N-1)+1;
		int b=(tmp[i]-1)%(N-1)+1;
		map[a][b]=0;
		map[a][b+1]=0;
	}
	return;
}

void comb(int idx, int R) {
	if (R==0) {
		int tmp[3], cnt=0;
		for (int i=1; i<=(N-1)*H; i++) {
			if (v[i]==1) tmp[cnt++]=i;
		}
		f(tmp, cnt);
		return;
	}
	if (idx>(N-1)*H) return;
	v[idx]=1;
	comb(idx+1, R-1);
	if (suc==1) return;
	v[idx]=0;
	comb(idx+1, R);
	if (suc==1) return;
}

int main(void) {
	int a, b;
	scanf("%d %d %d", &N, &M, &H);
	for (int i=0; i<M; i++) {
		scanf("%d %d", &a, &b);
		map[a][b]=1;
		map[a][b+1]=-1;
	}
	check();
	if (suc==1) {
		printf("0\n");
		return 0;
	}
	for (int i=1; i<=3; i++) {
		comb(1, i);
		if (suc!=-1) {
			printf("%d\n", i);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
