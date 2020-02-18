#include <stdio.h>

int main(void) {
	char s[260];
	while(1) {
		fgets(s, sizeof(s), stdin);
		if (s[0]=='#') return 0;
		int sum=0;
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==' ') continue;
			sum+=(i+1)*(s[i]-'A'+1);
		}
		printf("%d\n", sum);
	}
}
