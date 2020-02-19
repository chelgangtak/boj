#include <stdio.h>

int main(void) {
	char s[1001];
	int root;
	while(1) {
		scanf("%s", s);
		if (s[0]=='0'&&s[1]=='\0') return 0;
		root=0;
		for (int i=0; s[i]!='\0'; i++) root+=s[i]-'0';
		while (root>=10) {
			int t=root, sum=0;
			while (t>0) {
				sum+=t%10;
				t/=10;
			}
			root=sum;
		}
		printf("%d\n", root);
	}
}
