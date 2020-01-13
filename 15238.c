#include <stdio.h>

int main(void) {
	int n, v[26]={0,}, ans;
	char s[1001];
	scanf("%d", &n);
	scanf("%s", s);
	for (int i=0; i<n; i++) {
		v[s[i]-'a']++;
	}
	for (int i=0; i<26; i++) {
		if (i==0) ans=i;
		else if (v[i]>v[ans]) ans=i;
	}
	printf("%c %d\n", 'a'+ans, v[ans]);
	return 0;
}
