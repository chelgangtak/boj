#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	getchar();
	for (int i=0; i<N; i++) {
		int f=0;
		while(1) {
			char c=fgetc(stdin);
			if (c=='\n') break;
			if (f==0 && c>='a' && c<='z') {
				c-=32;
			}
			f=1;
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}
