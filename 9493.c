#include <stdio.h>
#include <stdlib.h>

int banolim(float x) {
	if ((int)(x*10)%10>=5) return (int)x+1;
	else return (int)x;
}

int main(void) {
	int M, A, B;
	while(1) {
		scanf("%d %d %d", &M, &A, &B);
		if (M+A+B==0) return 0;
		int sec=banolim((float)M*3600*abs(A-B)/(A*B));
		printf("%d:%02d:%02d\n", sec/3600, sec%3600/60, sec%60);
	}
}

