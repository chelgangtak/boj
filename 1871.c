#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, x, y;
	char s[9];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", s);
		x=(s[0]-'A')*26*26+(s[1]-'A')*26+(s[2]-'A');
		y=(s[4]-'0')*1000+(s[5]-'0')*100+(s[6]-'0')*10+(s[7]-'0');
		if (abs(x-y)<=100) printf("nice\n");
		else printf("not nice\n");
	}
	return 0;
}
