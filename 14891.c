#include <stdio.h>

int a[4][8];

void rotate(int i, int r) {
	int tmp;
	if (r==1) {
		tmp=a[i][7];
		for (int j=7; j>=1; j--) a[i][j]=a[i][j-1];
		a[i][0]=tmp;
	}
	else {
		tmp=a[i][0];
		for (int j=0; j<7; j++) a[i][j]=a[i][j+1];
		a[i][7]=tmp;
	}
}

void f(int s, int r) {
	if (s==0) {
		if (a[0][2]!=a[1][6]) {
			if (a[1][2]!=a[2][6]) {
				if (a[2][2]!=a[3][6]) rotate(3, -r);
				rotate(2, r);
			}
			rotate(1, -r);
		}
		rotate(0, r);
	}
	else if(s==1) {
		if (a[1][6]!=a[0][2]) rotate(0, -r);
		if (a[1][2]!=a[2][6]) {
			if (a[2][2]!=a[3][6]) rotate(3, r);
			rotate(2, -r);
		}
		rotate(1, r);
	}
	else if (s==2) {
		if (a[2][2]!=a[3][6]) rotate(3, -r);
		if (a[1][2]!=a[2][6]) {
			if (a[0][2]!=a[1][6]) rotate(0, r);
			rotate(1, -r);
		}
		rotate(2, r);
	}
	else {
		if (a[2][2]!=a[3][6]) {
			if (a[1][2]!=a[2][6]) {
				if (a[0][2]!=a[1][6]) rotate(0, -r);
				rotate(1, r);
			}
			rotate(2, -r);
		}
		rotate(3, r);
	}
}

int main(void) {
	char s[9];
	int K, n, r, ans=0, b=1;
	for (int i=0; i<4; i++) {
		scanf("%s", s);
		for (int j=0; j<8; j++) {
			a[i][j]=s[j]-'0';
		}
	}
	scanf("%d", &K);
	for (int i=0; i<K; i++) {
		scanf("%d %d", &n, &r);
		n--;
		f(n, r);
	}
	for (int i=0; i<4; i++) {
		if (a[i][0]==1) ans+=b;
		b*=2;
	}
	printf("%d\n", ans);
	return 0;
}
