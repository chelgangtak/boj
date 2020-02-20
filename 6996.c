#include <stdio.h>
#include <string.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		char s[101], t[101];
		int v1[26]={0,}, v2[26]={0,}, len1, len2, f=0;
		scanf("%s %s", s, t);
		len1=strlen(s);
		len2=strlen(t);
		if (len1!=len2) f=1;
		else {
			for (int j=0; j<len1; j++) {
				v1[s[j]-'a']++;
				v2[t[j]-'a']++;
			}
			for (int j=0; j<26; j++) {
				if (v1[j]!=v2[j]) {
					f=1;
					break;
				}
			}
		}
		if (f==1) printf("%s & %s are NOT anagrams.\n", s, t);
		else printf("%s & %s are anagrams.\n", s, t);
	}
	return 0;
}
