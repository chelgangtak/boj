#include <stdio.h>

int main(void) {
	char c;
	int num=0;
	long sum=0;
	while(1) {
		if (scanf("%c", &c)==EOF) {
			sum+=num;
			printf("%ld\n", sum);
			return 0;
		}
		if (c=='\n') continue;
		else if (c==',') {
			sum+=num;
			num=0;
		}
		else num=num*10+(c-'0');
	}
}
