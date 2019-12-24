#include <stdio.h>

int main(void) {
	char a[5][16];
	int len[5], max;
	for (int i=0; i<5; i++) {
		for (int j=0; ; j++) {
			scanf("%c", &a[i][j]);
			if (a[i][j]=='\n') {
				len[i]=j;
				break;
			}
		}
	}
	
	max=len[0];
	for (int i=1; i<5; i++) {
		if (len[i]>max) max=len[i];
	}

	for (int j=0; j<max; j++) {
		for (int i=0; i<5; i++) {
			if (j>=len[i]) continue;
			printf("%c", a[i][j]);
		}
	}
	printf("\n");
	return 0;
}
