#include <stdio.h>

int main(void) {
	char s[40];
	int cnt=0;
	while (1) {
		scanf("%s", s);
		if (s[0]=='#') return 0;
		cnt=0;
		for (int i=0; ; i++) {
			if (s[i]=='e' || s[i]=='o') {
				if (s[i]=='e') {
					if (cnt%2==0) printf("0\n");
					else printf("1\n");
				}
				else {
					if (cnt%2==0) printf("1\n");
					else printf("0\n");
				}
				break;
			}
			else {
				printf("%c", s[i]);
				if (s[i]=='1') cnt++;
			}
		}
	}
}
