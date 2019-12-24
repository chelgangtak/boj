#include <stdio.h>
int main(void) {
	int L, R, n=2;
	int length, sum=0;
	scanf("%d %d", &L, &R);
	length=L;
	while(1) {
		length=(int)(length*((float)R/100));
		if (length<=5) break;
		//printf("%d*%d\n", n, length);
		sum+=n*length;
		n*=2;
	}
	printf("%d\n", sum);
	return 0;
}
