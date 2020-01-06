#include <stdio.h>

int main(void) {
	char s[150];
	int A=0, B=0, a, b, i=0;
	scanf("%s", s);
	while(A!=2&&B!=2) {
		a=0;
		b=0;
		while(a!=21&&b!=21) {
			if (s[i]=='A') a++;
			else b++;
			i++;
		}
		printf("%d-%d\n", a, b);
		if (a==21) A++;
		else B++;
	}
	if (A==2) printf("A\n");
	else printf("B\n");
	return 0;
}
