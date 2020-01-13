#include <stdio.h>

int main(void) {
	int n, a[10000];
	long int sum;
	double avg;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		sum=0;
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		avg=(double)sum/n;
		int cnt=0;
		for (int i=0; i<n; i++) {
			if (a[i]<=avg) cnt++;
		}
		printf("%d\n", cnt);
	}
}
