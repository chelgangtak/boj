#include <stdio.h>

int f(char a, char b) {
	if ((a=='R'&&b=='S')||(a=='S'&&b=='P')||(a=='P'&&b=='R')) return 1;
	else if ((a=='R'&&b=='P')||(a=='S'&&b=='R')||(a=='P'&&b=='S')) return 2;
	else return 0;	
}

int main(void) {
	char s[76], t[76];
	int p1, p2, a;
	while (1) {
		scanf("%s", s);
		scanf("%s", t);
		if (s[0]=='E'&&t[0]=='E') return 0;
		p1=0; p2=0;
		for (int i=0; s[i]!='\0'; i++) {
			a=f(s[i], t[i]);
			if (a==1) p1++;
			else if (a==2) p2++;
		}
		printf("P1: %d\nP2: %d\n", p1, p2);
	}
}
