#include <stdio.h>
#include <string.h>

int main(void) {
	char s[11];
	int len, cnt;
	scanf("%s", s);
	len=strlen(s);
	cnt=len%3;
	for (int i=0; i<len; i++) {
		if (i==cnt) {
			if (i!=0) printf(",");
			cnt+=3;
		}
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}
