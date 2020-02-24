#include <stdio.h>

int main(void) {
	int l, u, n, sp;
	char s[102];
	while(1) {
		l=0;
		u=0;
		n=0;
		sp=0;
		if (fgets(s, sizeof(s), stdin)==NULL) return 0;
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==' ') sp++;
			else if (s[i]>='0'&&s[i]<='9') n++;
			else if (s[i]>='a'&&s[i]<='z') l++;
			else u++;
		}
		printf("%d %d %d %d\n", l, u, n, sp);
	}
}
