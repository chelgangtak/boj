#include <stdio.h>

int a[1000000];
int main(void) {
	int n=0, num;
	while(1) {
		int r=scanf("%d", &num);
		if (r==EOF) break;
		a[n++]=num;
	}
	for (int i=0; i<n-1; i++) {
		if (a[i]>a[i+1]) {
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");
	return 0;
}
