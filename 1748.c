#include <stdio.h>

int main(void) {
	int N, ans=0;
	scanf("%d", &N);
	for (int i=1; i<=N; i++) {
		if (i<10) ans+=1;
		else if (i<100) ans+=2;
		else if (i<1000) ans+=3;
		else if (i<10000) ans+=4;
		else if (i<100000) ans+=5;
		else if (i<1000000) ans+=6;
		else if (i<10000000) ans+=7;
		else if (i<100000000) ans+=8;
		else ans+=9;
	}
	printf("%d\n", ans);
	return 0;
}
