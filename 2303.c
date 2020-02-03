#include <stdio.h>

int main(void) {
	int N, a[5], ans, Max;
	scanf("%d", &N);
	for (int n=0; n<N; n++) {
		for (int i=0; i<5; i++) scanf("%d", &a[i]);
		int max;
		for (int i=0; i<3; i++) {
			for (int j=i+1; j<4; j++) {
				for (int k=j+1; k<5; k++) {
					if (i==0||j==1|k==2) max=(a[i]+a[j]+a[k])%10;
					else if ((a[i]+a[j]+a[k])%10>max) max=(a[i]+a[j]+a[k])%10;
				}
			}
		}
		if (n==0) {
			ans=0;
			Max=max;
		}
		else if (max>=Max) {
			ans=n;
			Max=max;
		}
	}
	printf("%d\n", ans+1);
	return 0;
}
