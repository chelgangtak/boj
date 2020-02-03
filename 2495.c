#include <stdio.h>

int main(void) {
	char s[9];
	for (int t=0; t<3; t++) {
		scanf("%s", s);
		int tmp=1, max=1;
		for (int i=1; s[i]!='\0'; i++) {
			if (s[i]==s[i-1]) tmp++;
			else {
				if (tmp>max) max=tmp;
				tmp=1;
			}
		}
		if (tmp>max) max=tmp;
		printf("%d\n", max);
	}
	return 0;
}
