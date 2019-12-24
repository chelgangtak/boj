#include <stdio.h>

int no[100001], left[100001], right[100001];

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i=1; i<=N; i++) {
		if (i==1) {
			no[1]=1;
			left[1]=1;
			right[1]=1;
		}
		else {
			left[i]=(no[i-1]+right[i-1])%9901;
			right[i]=(no[i-1]+left[i-1])%9901;
			no[i]=(no[i-1]+left[i-1]+right[i-1])%9901;
		}
	}
	printf("%d\n", (left[N]+right[N]+no[N])%9901);
	return 0;
}
