#include <stdio.h>
#include <string.h>

int main(void) {
	int N, a=0, f=0;
	char prev[13], cur[13];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		if (i>0) strcpy(prev, cur);
		scanf("%s", cur);
		if (i==0||f==1) continue;
		if (i==1) a=strcmp(prev, cur);
		else if (a*strcmp(prev, cur)<=0) f=1;
	}
	if (f==1) printf("NEITHER\n");
	else if (a<0) printf("INCREASING\n");
	else printf("DECREASING\n");
	return 0;
}
