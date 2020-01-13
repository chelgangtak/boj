#include <stdio.h>

int main(void) {
	int N, a[11]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, i, b, cnt=0;
	scanf("%d", &N);
	for (int t=0; t<N; t++) {
		scanf("%d %d", &i, &b);
		if (a[i]!=-1&&a[i]!=b) cnt++;
		a[i]=b;
	}
	printf("%d\n", cnt);
	return 0;
}
