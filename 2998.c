#include <stdio.h>
#include <string.h>

int main(void) {
	char s[101];
	int len, cnt=0, a=0, k;
	scanf("%s", s);
	len=strlen(s);
	if (len%3!=0) k=len%3;
	else k=3;
	for (int i=0; i<len; i++) {
		a=a*2+(s[i]-'0');
		cnt++;
		if (cnt==k) {
			printf("%d", a);
			if (k==len%3) k=3;
			cnt=0;
			a=0;
		}
	}
	printf("\n");
	return 0;
}
