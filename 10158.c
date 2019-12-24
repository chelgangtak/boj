#include <stdio.h>

int main(void) {
	int w, h, p, q, t;
	int d[4][2]={{1,1},{-1,1},{-1,-1},{1,-1}};
	int np, nq, k=0;
	scanf("%d %d", &w, &h);
	scanf("%d %d", &p, &q);
	scanf("%d", &t);
	for (int i=1; i<=t; i++) {
		np=p+d[k][0];
		nq=q+d[k][1];
		printf("%d, %d -> %d, %d\n", p, q, np, nq);
		if ((np<0 || np>w) || (nq<0 || nq>h)) {
			k=(k+1)%4;
			if ((np<0 || np>w) && (nq<0 || nq>h)) k=(k+1)%4;
			np=p+d[k][0];
			nq=q+d[k][1];
			printf("-> %d, %d\n", np, nq);
		}
		p=np;
		q=nq;
		printf("최종 %d %d\n", p, q);
	}
	printf("%d %d\n", p, q);
	return 0;
}
