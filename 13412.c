#include <stdio.h>

int gcd(int a, int b) {
	int x, y, r;
	if (a>b) {
		x=a;
		y=b;
	}
	else {
		x=b;
		y=a;
	}

	do {
		r=x%y;
		x=y;
		y=r;
	} while (r>0);
	return x;
}

int main(void) {
	int T, N, cnt;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		if (N==1) {
			printf("1\n");
			continue;
		}
		cnt=0;
		for (int i=1; i*i<N; i++) {
			if (N%i!=0) continue;
			if (gcd(i, N/i)==1) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
