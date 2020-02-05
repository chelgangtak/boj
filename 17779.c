#include <stdio.h>

int N, A[20][20], tot=0, f=0, ans;

int cal(int r, int c, int d1, int d2) {
	int pop[5]={0,};
	for (int i=0; i<r+d1; i++) {
		int end;
		if (i<r) end=c;
		else end=c-(i-r)-1;
		for (int j=0; j<=end; j++) pop[0]+=A[i][j];
	}
	for (int i=0; i<=r+d2; i++) {
		int start;
		if (i<r) start=c+1;
		else start=c+(i-r)+1;
		for (int j=start; j<N; j++) pop[1]+=A[i][j];
	}
	for (int i=r+d1; i<N; i++) {
		int end;
		if (i>r+d1+d2) end=c-d1+d2-1;
		else end=c-d1-1+i-(r+d1);
		for (int j=0; j<=end; j++) pop[2]+=A[i][j];
	}
	for (int i=r+d2+1; i<N; i++) {
		int start;
		if (i>r+d1+d2) start=c-d1+d2;
		else start=c+d2+1-(i-r-d2);
		for (int j=start; j<N; j++) pop[3]+=A[i][j];
	}
	pop[4]=tot-pop[0]-pop[1]-pop[2]-pop[3];
	int max=pop[0];
	int min=pop[0];
	for (int i=1; i<=4; i++) {
		if (pop[i]>max) max=pop[i];
		if (pop[i]<min) min=pop[i];
	}
	return max-min;
}

int main(void) {
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			scanf("%d", &A[i][j]);
			tot+=A[i][j];
		}
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			for (int d1=1; j-d1>=0; d1++) {
				for (int d2=1; j+d2<N; d2++) {
					if (i+d1+d2>=N) continue;
					int diff=cal(i, j, d1, d2);
					if (f==0) {
						ans=diff;
						f=1;
					}
					else if (diff<ans) ans=diff;
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
