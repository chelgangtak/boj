#include <stdio.h>

int main(void) {
	int T, b, sum;
	char c;
	scanf("%d" ,&T);
	for (int t=0; t<T; t++) {
		scanf("%d", &b);
		sum=0;
		while(1) {
			c=getchar();
			if (c=='\n') {
				printf("%d\n", sum%(b-1));
				break;
			}
			if (c==' ') continue;
			sum+=c-'0';
		}
	}
	return 0;
}
