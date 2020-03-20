#include <stdio.h>

int f(int a) {
	switch(a) {
		case 2: return 28;
		case 4: case 6: case 9: case 11: return 30;
		default: return 31;
	}
}

int main(void) {
	int N, start=31+28+31+2, end;
	scanf("%d", &N);
	end=start+N-1;
	for (int i=2014; ; i++) {
		int y=365, yoon=0;
		if (i%4==0&&i%100!=0||i%400==0) {
			yoon=1;
			y++;
		}
		if (end>y) {
			end-=y;
			continue;
		}
		int j;
		for (j=1; j<=12; j++) {
			int m=f(j);
			if (yoon==1&&m==28) m++;
			if (end>m) end-=m;
			else break;
		}
		printf("%d-%02d-%02d\n", i, j, end);
		return 0;
	}
}
