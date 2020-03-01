#include <stdio.h>

int main(void) {
	int N, M, v[501]={0,}, a, b, c;
	scanf("%d %d", &N, &M);
	for (int i=0; i<M; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a==0) {
			for (int j=b; j<=c; j++) v[j]=1-v[j];
		}
		else {
			int cnt=0;
			for (int j=b; j<=c; j++) {
				if (v[j]==1) cnt++;
			}
			printf("%d\n", cnt);
		}
	}
	return 0;
}
