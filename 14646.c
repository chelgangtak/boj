#include <stdio.h>

int v[100001];
int main(void) {
	int N, n, s=0, ans=0;
	for (int i=1; i<=100000; i++) v[i]=0;
	scanf("%d", &N);
	for (int i=0; i<2*N; i++) {
		scanf("%d", &n);
		if (v[n]==0) {
			v[n]=1;
			s++;
			if (s>ans) ans=s;
		}
		else if (v[n]==1) {
			s--;
		}
	}
	printf("%d\n", ans);
	return 0;
}
