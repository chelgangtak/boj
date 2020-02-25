#include <stdio.h>

int main(void) {
	int sum=0, a;
	while(1) {
		if (scanf("%d", &a)==EOF) break;
		sum+=a;
	}
	printf("%d\n", sum);
	return 0;
}
