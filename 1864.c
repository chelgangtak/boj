#include <stdio.h>

int f(char c) {
	switch(c) {
		case '-': return 0;
		case '\\': return 1;
		case '(': return 2;
		case '@': return 3;
		case '?': return 4;
		case '>': return 5;
		case '&': return 6;
		case '%': return 7;
		case '/': return -1;
	}
}

int main(void) {
	char s[10];
	int a;
	while (1) {
		scanf("%s", s);
		if (s[0]=='#') return 0;
		a=0;
		for (int i=0; s[i]!='\0'; i++) {
			a=a*8+f(s[i]);
		}
		printf("%d\n", a);
	}
}
