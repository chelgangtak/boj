#include <stdio.h>

int check(int n, int L) {
	int t=n;
	while (t>0) {
		int r=t%10;
		if (r==L) return -1;
		t=t/10;
	}
	return 1;
}

int main(void) {
	int N, L, cnt=0;
	scanf("%d %d", &N, &L);
	for (int i=1; ; i++) {
		if (check(i, L)==-1) continue;
		cnt++;
		if (cnt==N) {
			printf("%d\n", i);
			return 0;
		}
	}
}
