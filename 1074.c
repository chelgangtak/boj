#include <stdio.h>
#include <math.h>

int a[32800][32800], cnt=0;

void draw(int r, int c, int M) {
	if (M==2) {
		a[r][c]=cnt++;
		a[r][c+1]=cnt++;
		a[r+1][c]=cnt++;
		a[r+1][c+1]=cnt++;
		return;
	}
	draw(r, c, M/2);
	draw(r, c+M/2, M/2);
	draw(r+M/2, c, M/2);
	draw(r+M/2, c+M/2, M/2);
}

int main(void) {
	int N, r, c, M;
	scanf("%d %d %d", &N, &r, &c);
	M=(int)pow(2, N);
	draw(0, 0, M);
	printf("%d\n", a[r][c]);
	return 0;
}
