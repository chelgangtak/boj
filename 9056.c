#include <stdio.h>

int main(void) {
	int T;
	char s[81];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int v[26]={0,};
		scanf("%s", s);
		for (int i=0; s[i]!='\0'; i++) {
			if (v[s[i]-'A']==0) v[s[i]-'A']=1;
		}
		int fail=0;
		scanf("%s", s);
		for (int i=0; s[i]!='\0'; i++) {
			if (v[s[i]-'A']<1) {
				fail=1;
				break;
			}
			if (v[s[i]-'A']==1) v[s[i]-'A']++;
		}
		for (int i=0; i<26; i++) {
			if (v[i]!=0&&v[i]!=2) {
				fail=1;
				break;
			}
		}
		if (fail==1) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
