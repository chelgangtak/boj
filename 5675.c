#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int v[181]={0,}, a;
	for (int i=0; i<12; i++) {
		for (int j=0; j<60; j++) {
			int si=30*i+6*(j/12);
			int boon=6*j;
			int angle=abs(si-boon);
			if (angle>180) angle=360-180;
			v[angle]=1;
		}
	}
	while(scanf("%d", &a)!=EOF) {
		if (v[a]==1) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}
