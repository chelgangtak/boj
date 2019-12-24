#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int eye;
	int cnt;
} Dice;

int cmp(const void *a, const void *b) {
	Dice *pa=(Dice*)a, *pb=(Dice*)b;
	if ((pa->cnt)>(pb->cnt)) return -1;
	else if ((pa->cnt)<(pb->cnt)) return 1;
	else return 0;
}

int f(int a, int b, int c, int f) {
	Dice d[6];
	for (int i=0; i<6; i++) {
		d[i].eye=i+1;
		d[i].cnt=0;
	}
	d[a-1].cnt++;
	d[b-1].cnt++;
	d[c-1].cnt++;
	d[f-1].cnt++;
	qsort(d, 6, sizeof(Dice), cmp);
	if (d[0].cnt==4) return 50000+d[0].eye*5000;
	if (d[0].cnt==3) return 10000+d[0].eye*1000;
	if (d[0].cnt==2&&d[1].cnt==2) return 2000+d[0].eye*500+d[1].eye*500;
	if (d[0].cnt==2) return 1000+d[0].eye*100;
	int e;
	for (int i=0; i<4; i++) {
		if (i==0) e=d[i].eye;
		else if (d[i].eye>e) e=d[i].eye;
	}
	return e*100;
}

int main(void) {
	int n, a, b, c, d, max, t;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		t=f(a, b, c, d);
		if (i==0) max=t;
		else if (max<t) max=t;
	}
	printf("%d\n", max);
	return 0;	
}
