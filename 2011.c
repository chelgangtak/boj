#include <stdio.h>
#include <string.h>

int d[5001];
char s[5001];

int main(void) {
	scanf("%s", s);
	int len=strlen(s);
	d[0]=1;
	for (int i=1; i<=len; i++) {
		d[i]=0;
		if (i>=1) {
			if(s[i-1]>='1' && s[i-1]<='9') d[i]=(d[i]+d[i-1])%1000000;
		}
		if (i>=2) {
			int n=(s[i-2]-'0')*10+(s[i-1]-'0');
			if (n>=10 && n<=26) d[i]=(d[i]+d[i-2])%1000000;
		}
	}
	printf("%d\n", d[len]);
	return 0;
}
