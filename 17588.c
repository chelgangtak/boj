#include <stdio.h>

int main(void) {
	int n, a, s=1, suc=1;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a);
		if (s!=a) {
			suc=0;
			for (int j=s; j<a; j++) printf("%d\n", j);
			s=a+1;
		}
		else s++;
	}
	if (suc==1) printf("good job\n");
	return 0;
}
