#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int a[7], sum1, sum2;
		for (int i=0; i<6; i++) scanf("%d", &a[i]);
		sum1=a[0]+a[1]*2+a[2]*3+a[3]*3+a[4]*4+a[5]*10;
		for (int i=0; i<7; i++) scanf("%d", &a[i]);
		sum2=a[0]+a[1]*2+a[2]*2+a[3]*2+a[4]*3+a[5]*5+a[6]*10;
		printf("Battle %d: ", t+1);
		if (sum1>sum2) printf("Good triumphs over Evil\n");
		else if (sum1<sum2) printf("Evil eradicates all trace of Good\n");
		else printf("No victor on this battle field\n");
	}
	return 0;
}
