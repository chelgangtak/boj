#include <stdio.h> 

int main(void) {
	char s[210];
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (s[0]=='*') return 0;
		int v[26]={0,};
		int sum=0;
		for (int j=0; s[j]!='\n'; j++) {
			if (s[j]<'a'||s[j]>'z') continue;
			if (v[s[j]-'a']==0) {
				v[s[j]-'a']++;
				sum++;
			}
		}
		if (sum==26) printf("Y\n");
		else printf("N\n");
	}
}
