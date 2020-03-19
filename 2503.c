#include <stdio.h>

typedef struct {
	int num;
	int strike;
	int ball;
} Element;

Element A[100];
int N, ans=0;

int comp(int n, Element x) {
	int p[3], q[3], s=0, b=0;
	p[0]=n/100;
	p[1]=n%100/10;
	p[2]=n%10;
	q[0]=x.num/100;
	q[1]=x.num%100/10;
	q[2]=x.num%10;
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			if (p[i]==q[j]) {
				if (i==j) s++;
				else b++;
			}
		}
	}
	if (s==x.strike&&b==x.ball) return 1;
	else return 0;
}

int main(void) {
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d %d", &A[i].num, &A[i].strike, &A[i].ball);
	}
	for (int i=123; i<=987; i++) {
		int a=i/100, b=i%100/10, c=i%10;
		if (b==0||c==0) continue;
		if (a==b||b==c||c==a) continue;
		int t;
		for (int j=0; j<N; j++) {
			t=comp(i, A[j]);
			if (t==0) break;
		}
		if (t==0) continue;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
