#include <stdio.h>

char s[101];

int main(void) {
	int i;
	int len, num=0, big=0, small=0, etc=0, ans=0;
	scanf("%d", &len);
	scanf("%s", s);
	for (i=0; s[i]!='\0'; i++) {
		if (s[i]>='a' && s[i]<='z') small++;
		else if (s[i]>='A' && s[i]<='Z') big++;
		else if (s[i]>='0' && s[i]<='9') num++;
		else etc++;
	}
	if (num==0) ans++;
	if (big==0) ans++;
	if (small==0) ans++;
	if (etc==0) ans++;
	if (len<6 && 6-len>ans) ans=6-len;
	printf("%d\n", ans);
	return 0;
}
