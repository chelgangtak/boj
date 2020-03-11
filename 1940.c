#include <stdio.h>

int main(void) {
	int N, M, v[100001]={0,}, a, cnt=0;
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		v[a]++;
	}
	for (int i=1; i<=M; i++) {
		if (i>100000||2*i>=M) break;
		int j=M-i;
		if (j<1||j>100000) continue;
		if (v[i]>0&&v[j]>0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
