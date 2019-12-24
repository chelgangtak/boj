#include <stdio.h>

int main(void) {
	int A[2]={0,0}, a;
	for (int i=0;  i<2; i++) {
		for (int j=3; j>=1; j--) {
			scanf("%d", &a);
			A[i]+=a*j;
		}
	}
	if (A[0]>A[1]) printf("A\n");
	else if (A[0]<A[1]) printf("B\n");
	else printf("T\n");
	return 0;
}
