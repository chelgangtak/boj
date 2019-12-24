#include <stdio.h>

int main(void) {
	int N, a[100], n, cnt=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	for (int i=0; i<N; i++) {
		if (a[i]==n) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
