#include <stdio.h>

int f(char a, char b) {
	if ((a=='R'&&b=='S')||(a=='S'&&b=='P')||(a=='P'&&b=='R')) return 1;
	else if (a==b) return 0;
	else return 2;
}

int main(void) {
	int t, n, p1, p2;
	char a, b;
	scanf("%d", &t);
	for (int k=0; k<t; k++) {
		p1=0;
		p2=0;
		scanf("%d", &n);
		getchar();
		for (int i=0; i<n; i++) {
			scanf("%c %c", &a, &b);
			getchar();
			if (f(a,b)==1) p1++;
			else if (f(a,b)==2) p2++;
		}
		if (p1>p2) printf("Player 1\n");
		else if (p1<p2) printf("Player 2\n");
		else printf("TIE\n");
	}
	return 0;
}
