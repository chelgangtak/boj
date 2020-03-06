#include <stdio.h>

int main(void) {
	int N, a[100000], cnt=1, max;
	scanf("%d", &N);
	for (int i=0; i<N; i++) scanf("%d", &a[i]);
	max=a[N-1];
	for (int i=N-2; i>=0; i--) {
		if (a[i]>max) {
			cnt++;
			max=a[i];
		}
	}
	printf("%d\n", cnt);
	return 0;
}
