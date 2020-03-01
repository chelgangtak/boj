#include <stdio.h>

int main(void) {
	int NR, NC, a[101][101], max=0, r, c;
	scanf("%d %d", &NR, &NC);
	for (int i=1; i<=NR; i++) {
		for (int j=1; j<=NC; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i=1; i<=NR-2; i++) {
		for (int j=1; j<=NC-2; j++) {
			int sum=0;
			for (int k=0; k<=2; k++) {
				for (int l=0; l<=2; l++) sum+=a[i+k][j+l];
			}
			if (sum>max) {
				max=sum;
				r=i;
				c=j;
			}
		}
	}
	printf("%d\n%d %d\n", max, r, c);
	return 0;
}
