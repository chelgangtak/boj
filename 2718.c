#include <stdio.h>

int a[10001];
int main(void) {
	int T, N;
	a[0]=1;
	for (int i=1; i<=10000; i++) {
		a[i]=0;
		if (i>=3) a[i]+=a[i-3]*2;
		if (i>=2) a[i]+=a[i-2]*4;
		if (i>=1) a[i]+=a[i-1]*1;
	}
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		printf("%d\n", a[N]);
	}
	return 0;
}
