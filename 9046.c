#include <stdio.h>

int main(void) {
	int T;
	char s[257];
	scanf("%d", &T);
	getchar();
	for (int t=0; t<T; t++) {
		int v[26]={0,};
		fgets(s, sizeof(s), stdin);
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==' ') continue;
			v[s[i]-'a']++;
		}
		int idx=0;
		for (int i=1; i<26; i++) {
			if (v[i]>v[idx]) idx=i;
		}
		for (int i=0; i<26; i++) {
			if (i==idx) continue;
			if (v[i]==v[idx]) idx=-1;
		}
		if (idx==-1) printf("?\n");
		else printf("%c\n", idx+'a');
	}
	return 0;
}
