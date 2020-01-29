#include <stdio.h>

int main(void) {
	int n, x, y, a[5]={0,};
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d %d", &x, &y);
		if (x>0&&y>0) a[1]++;
		else if (x<0&&y>0) a[2]++;
		else if (x<0&&y<0) a[3]++;
		else if (x>0&&y<0) a[4]++;
		else a[0]++;
	}
	for (int i=1; i<=4; i++) printf("Q%d: %d\n", i, a[i]);
	printf("AXIS: %d\n", a[0]);
	return 0;
}
