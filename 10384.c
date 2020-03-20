#include <stdio.h>

int main(void) {
	int n;
	char c;
	scanf("%d", &n);
	getchar();
	for (int i=0; i<n; i++) {
		int v[26]={0,};
		while(1) {
			scanf("%c", &c);
			if (c=='\n') break;
			if (c>='A'&&c<='Z') c=c-'A'+'a';
			if (c>='a'&&c<='z') v[c-'a']++;
		}
		int min=0;
		for (int j=0; j<26; j++) {
			if (j==0||v[j]<min) min=v[j];
		}
		printf("Case %d: ", i+1);
		if (min==0) printf("Not a pangram\n");
		else if (min==1) printf("Pangram!\n");
		else if (min==2) printf("Double pangram!!\n");
		else printf("Triple pangram!!!\n");
	}
	return 0;
}
