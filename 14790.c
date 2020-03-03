#include <stdio.h>

int tidy(int n) {
	if (n>=10) {
		int t=n%10;
		n/=10;
		while(n>0) {
			int s=n%10;
			if (s>t) return 0;
			t=s;
			n/=10;
		}
	}
	return 1;
}

int main(void) {
	int T, n;
	scanf("%d", &T);
	for (int t=1; t<=T; t++) {
		scanf("%d", &n);
		for (int i=n; ; i--) {
			if (tidy(i)==1) {
				printf("Case #%d: %d\n", t, i);
				break;;
			}
		}
	}
	return 0;
}
