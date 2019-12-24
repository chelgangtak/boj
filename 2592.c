#include <stdio.h>

int v[100];
int main(void) {
	int n, avg=0, max, ans;
	for (int i=0; i<10; i++) {
		scanf("%d", &n);
		avg+=n/10;
		v[n/10]++;
	}
	for (int i=1; i<100; i++) {
		if (i==1) {
			max=v[i];
			ans=i;
		}
		else if (max<v[i]) {
			max=v[i];
			ans=i;
		}
	}
	printf("%d\n%d\n", avg, ans*10);
	return 0;
}
