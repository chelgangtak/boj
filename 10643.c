#include <stdio.h>

int main(void) {
	int a[8], sum, max;
	for (int i=0; i<8; i++) scanf("%d", &a[i]);
	for (int i=0; i<8; i++) {
		sum=0;
		for (int j=0; j<4; j++) sum+=a[(i+j)%8];
		if (i==0) max=sum;
		else if (sum>max) max=sum;
	}
	printf("%d\n", max);
	return 0;
}
