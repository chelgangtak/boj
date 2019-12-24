#include <stdio.h>

int main(void) {
	int N, a=0, b=0, g=0, max;
	char s[101], A[3]={'A','B','C'}, B[4]={'B','A','B','C'}, G[6]={'C','C','A','A','B','B'};
	scanf("%d", &N);
	scanf("%s", s);
	for (int i=0; i<N; i++) {
		if (s[i]==A[i%3]) a++;
		if (s[i]==B[i%4]) b++;
		if (s[i]==G[i%6]) g++;	
	}
	max=a;
	if (b>max) max=b;
	if (g>max) max=g;
	printf("%d\n", max);
	if (a>=b&&a>=g) printf("Adrian\n");
	if (b>=a&&b>=g) printf("Bruno\n");
	if (g>=a&&g>=b) printf("Goran\n");
	return 0;
}
