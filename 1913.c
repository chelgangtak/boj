#include <stdio.h>

int a[999][999];

int main(void) {
	int N, num, row, col, d, cnt=1, r, c;
	scanf("%d", &N);
	scanf("%d", &num);
	row=N/2;
	col=N/2;
	a[row][col]=cnt;
	if (cnt==num) {
		r=row;
		c=col;
	}
	cnt++;
	for (int a=1; a<=N-1; a++) {
		if (a%2==1) {
			for (int i=1; i<=a; i++) {
				row--;
				a[row][col]=cnt;
				if (cnt==num) {
					r=row;
					c=col;
				}
				cnt++;
			}
			for (int i=1; i<=a; i++) {
				col++;
				a[row][col]=cnt;
				if (cnt==num) {
					r=row;
					c=col;
				}
				cnt++;
			}
		}
		else {
			for (int i=1; i<=a; i++) {
				row++;
				a[row][col]=cnt;
				if (cnt==num) {
					r=row;
					c=col;
				}
				cnt++;
			}
			for (int i=1; i<=a; i++) {
				col--;
				a[row][col]=cnt;
				if (cnt==num) {
					r=row;
					c=col;
				}
				cnt++;
			}
		}
	}
	for (int i=1; i<=N-1; i++) {
		row--;
		a[row][col]=cnt;
		if (cnt==num) {
			r=row;
			c=col;
		}
		cnt++;
	}
	printf("%d %d\n", r, c);
	return 0;
}
