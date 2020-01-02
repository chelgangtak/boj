#include <stdio.h>

int main(void) {
	char s[1001], t[1001];
	int a[26]={0,}, b[26]={0,}, N, suc;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s %s", s, t);
		suc=1;
		for (int j=0; j<26; j++) {
			a[j]=0;
			b[j]=0;
		}
		for (int j=0; s[j]!='\0'; j++) a[s[j]-'a']++;
		for (int j=0; t[j]!='\0'; j++) b[t[j]-'a']++;
		for (int j=0; j<26; j++) {
			if (a[j]!=b[j]) {
				suc=0;
				break;
			}
		}
		if (suc==1) printf("Possible\n");
		else printf("Impossible\n");
	}
	return 0;
}
