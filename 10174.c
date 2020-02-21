#include <stdio.h>
#include <string.h>

int main(void) {
	int n, len;
	char s[1002];
	scanf("%d", &n);
	getchar();
	for (int i=0; i<n; i++) {
		fgets(s, sizeof(s), stdin);
		len=strlen(s);
		int i=0, j=len-2, f=0;
		while(i<j) {
			if (s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a';
			if (s[j]>='A'&&s[j]<='Z') s[j]=s[j]-'A'+'a';
			if (s[i]!=s[j]) {
				f=1;
				break;
			}
			i++;
			j--;
		}
		if (f==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
