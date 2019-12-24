#include <stdio.h>

int isLeapyear(int y) {
	if (y%4==0&&y%100!=0||y%400==0) return 1;
	else return 0;
}

int main(void) {
	int d, m, y, f;
	while (1) {
		scanf("%d %d %d", &d, &m, &y);
		if (d==0&&m==0&&y==0) return 0;
		f=0;
		if (d<1||d>31) f=1;
		if (m<1||m>12) f=1;
		if (d==31&&(m==2||m==4||m==6||m==9||m==11)) f=1;
		if (d==29&&m==2&&isLeapyear(y)==0) f=1;
		if (f==0) printf("Valid\n");
		else printf("Invalid\n");
	}
}
