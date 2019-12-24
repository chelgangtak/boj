#include <stdio.h>

int main(void) {
	double a[3][2];
	int idx;
	for (int i=0; i<3; i++) scanf("%lf", &a[i][0]);
	for (int i=0; i<3; i++) scanf("%lf", &a[i][1]);
	for (int i=0; i<3; i++) {
		if (i==0) idx=0;
		else if (a[i][0]/a[i][1]<a[idx][0]/a[idx][1]) idx=i;
	}
	for (int i=0; i<3; i++) printf("%lf ", a[i][0]-a[i][1]*a[idx][0]/a[idx][1]);
	printf("\n");
	return 0;
}
