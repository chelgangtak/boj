#include <stdio.h>

int main(void) {
	int N, r, e, c;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d %d", &r, &e, &c);
		if (r<e-c) printf("advertise\n");
		else if (r==e-c) printf("does not matter\n");
		else printf("do not advertise\n");
	}
	return 0;
}
