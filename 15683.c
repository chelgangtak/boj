#include <stdio.h>

typedef struct {
	int r;
	int c;
} CCTV;

int N, M, a[8][8], b[8][8], zero=0, max=0, cnt, cn=0, dir[8];
CCTV c[8];

void paint2(int r, int c, int d) {
	if (d==0) {
		for (int k=1; ; k++) {
			if (c+k==M||b[r][c+k]==6) break;
			if (b[r][c+k]==0) {
				b[r][c+k]='#';
				cnt++;
			}
		}
	}
	else if (d==1) {
		for (int k=1; ; k++) {
			if (r+k==N||b[r+k][c]==6) break;
			if (b[r+k][c]==0) {
				b[r+k][c]='#';
				cnt++;
			}
		}
	}
	else if (d==2) {
		for (int k=1; ; k++) {
			if (c-k<0||b[r][c-k]==6) break;
			if (b[r][c-k]==0) {
				b[r][c-k]='#';
				cnt++;
			}
		}
	}
	else {
		for (int k=1; ; k++) {
			if (r-k<0||b[r-k][c]==6) break;
			if (b[r-k][c]==0) {
				b[r-k][c]='#';
				cnt++;
			}
		}
	}
}

void paint(int r, int c, int x, int d) {
	if (x==1) paint2(r, c, d);
	else if (x==2) {
		paint2(r, c, d);
		paint2(r, c, d+2);
	}
	else if (x==3) {
		paint2(r, c, d);
		paint2(r, c, (d+3)%4);
	}
	else if (x==4) {
		paint2(r, c, d);
		paint2(r, c, (d+2)%4);
		paint2(r, c, (d+3)%4);
	}
	else if (x==5) {
		for (int i=0; i<4; i++) paint2(r, c, i);
	}
}

void f() {
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) b[i][j]=a[i][j];
	}
	for (int i=0; i<cn; i++) {
		paint(c[i].r, c[i].c, a[c[i].r][c[i].c], dir[i]);
	}
}

void d(int idx) {
	if (idx==cn) {
		cnt=0;
		f();
		if (cnt>max) max=cnt;
		return;
	}
	int x=a[c[idx].r][c[idx].c];
	if (x==1||x==3||x==4) {
		for (int i=0; i<4; i++) {
			dir[idx]=i;
			d(idx+1);
		}
	}
	else if (x==2) {
		for (int i=0; i<2; i++) {
			dir[idx]=i;
			d(idx+1);
		}
	}
	else {
		dir[idx]=0;
		d(idx+1);
	}
}

int main(void) {
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j]==0) zero++;
			else if (a[i][j]<6) {
				c[cn].r=i;
				c[cn].c=j;
				cn++;
			}	
		}
	}
	//for (int i=0; i<cn; i++) printf("%d %d\n", c[i].r, c[i].c);
	d(0);
	printf("%d\n", zero-max);
	return 0;
}
