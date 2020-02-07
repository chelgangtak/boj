#include <stdio.h>

int main(void) {
	int a, sum=0, f=0;
	for (int i=1; i<=10; i++) {
		scanf("%d", &a);
		if (f==1) continue;
		sum+=a;
		if (sum>100) {
			if (100-(sum-a)<sum-100) sum-=a;
			f=1;
		}
	}
	printf("%d\n", sum);
	return 0;
}
