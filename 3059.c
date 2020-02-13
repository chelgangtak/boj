#include <stdio.h>

int main(void) {
	int T;
	char s[1001];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		int v[26]={0,}, ans=0;
		scanf("%s", s);
		for (int i=0; s[i]!='\0'; i++) v[s[i]-'A']=1;
		for (int i=0; i<26; i++) {
			if (v[i]==0) ans+=i+65;
		}
		printf("%d\n", ans);
	}
	return 0;
}
