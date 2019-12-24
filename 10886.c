#include <stdio.h>

int main(void) {
	int N, a, b=0, c=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &a);
		if (a==1) b++;
		else c++;
	}
	if (b>c) printf("Junhee is cute!\n");
	else printf("Junhee is not cute!\n");
	return 0;
}
