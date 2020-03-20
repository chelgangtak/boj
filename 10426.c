#include <stdio.h>

int f(int a) {
	switch(a) {
		case 2: return 28;
		case 4: case 6: case 9: case 11: return 30;
		default: return 31;
	}
}

int main(void) {
	int N, year, month, day, start, end;
	scanf("%d-%d-%d %d", &year, &month, &day, &N);
	start=day;
	for (int i=1; i<month; i++) start+=f(i);
	if ((year%4==0&&year%100!=0||year%400==0)&&month>2) start++;
	end=start+N-1;
	for (int i=year; ; i++) {
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
