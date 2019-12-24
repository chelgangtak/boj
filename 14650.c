#include <stdio.h>

int s, e;

void f(int N) {
	int a=1, b=2;
	for (int i=2; i<=N; i++) {
		a=10*a;
		b=10*b+2;
	}
	s=a;
	e=b;
}

int check(int n) {
	int t=n;
	while (t>0) {
		int r=t%10;
		if (r>=3) return -1;
		t/=10;
	}
	return 1;
}

int main(void) {
	int N, cnt=0;
	scanf("%d", &N);
	f(N);
	//printf("%d %d\n", s, e);
	for (int i=s; i<=e; i++) {
		if (check(i)==-1) continue;
		if (i%3==0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
