#include <stdio.h>

int main(void) {
	int a[9], sum=0, b, c;
	for (int i=0; i<9; i++) {
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	sum-=100;
	for (int i=0; i<9; i++) {
		for (int j=i+1; j<9; j++) {
			if (a[i]+a[j]==sum) {
				b=i;
				c=j;
				break;
			}
		}
	}
	for (int i=0; i<9; i++) {
		if (i==b||i==c) continue;
		printf("%d\n", a[i]);
	}
	return 0;
}
