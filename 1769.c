#include <stdio.h>

int main(void) {
	char s[1000001];
	int i=0, sum=0, cnt;
	scanf("%s", s);
	for (i=0; s[i]!='\0'; i++) {
		sum+=s[i]-'0';
	}
	if (i==1) printf("0\n");
	else {
		cnt=1;
		while (sum>=10) {
			int t=sum, tmp=0;
			while (t>0) {
				tmp+=t%10;
				t/=10;
			}
			cnt++;
			sum=tmp;
		}
		printf("%d\n", cnt);
	}
	if (sum%3==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
