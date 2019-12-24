#include <stdio.h>
int p[1001];
int f(int a, int b) {
	int x,y, r;
	if (a>=b) {
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
	if (x==1) return 1;
	else return -1;
}

int main(void) {
	int T, N;
	scanf("%d", &T);
	int ans=1;
	for (int a=1; a<=1000; a++) {
		for (int b=1; b<a; b++) {
			if (f(a, b)==1) ans++;
		}
		p[a]=2*ans+1;
	}
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		printf("%d\n", p[N]);
	}
	return 0;
}
