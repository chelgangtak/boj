#include <stdio.h>

int main(void) {
	int T, a[8];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		for (int i=0; i<8; i++) scanf("%d", &a[i]);
		for (int i=0; i<4; i++) a[i]=a[i]+a[i+4];
		if (a[0]<1) a[0]=1;
		if (a[1]<1) a[1]=1;
		if (a[2]<0) a[2]=0;
		printf("%d\n", a[0]+5*a[1]+2*a[2]+2*a[3]);
	}
	return 0;
}
