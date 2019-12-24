#include <stdio.h>

int main(void) {
	int a[7], flag=0, sum=0, min;
	for (int i=0; i<7; i++) {
		scanf("%d", &a[i]);
		if (a[i]%2==1) {
			sum+=a[i];
			if (flag==0) {
				flag=1;
				min=a[i];
			}
			else if (a[i]<min) min=a[i];
		}
	}
	if (flag==1) printf("%d\n%d\n", sum, min);
	else printf("-1\n");
	return 0;
}
