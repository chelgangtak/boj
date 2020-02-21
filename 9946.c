#include <stdio.h>
#include <string.h>

int main(void) {
	char s[1001], t[1001];
	for (int k=1; ; k++) {
		scanf("%s", s);
		scanf("%s", t);
		if (strcmp(s, "END")==0&&strcmp(t, "END")==0) return 0;
		int v1[26]={0,}, v2[26]={0,}, f=0;
		for (int i=0; s[i]!='\0'; i++) v1[s[i]-'a']++;
		for (int i=0; t[i]!='\0'; i++) v2[t[i]-'a']++;
		for (int i=0; i<26; i++) {
			if (v1[i]!=v2[i]) {
				f=1;
				break;
			}
		}
		printf("Case %d: ", k);
		if (f==0) printf("same\n");
		else printf("different\n");
	}
}
