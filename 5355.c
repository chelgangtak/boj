#include <stdio.h>

int main(void) {
	int T;
	double x;
	char s[101];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%lf", &x);
		fgets(s, sizeof(s), stdin);
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]=='@') x=x*3;
			else if (s[i]=='%') x=x+5;
			else if (s[i]=='#') x=x-7;
		}
		printf("%.2lf\n", x);
	}
	return 0;
}
