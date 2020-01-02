#include <stdio.h>

int f(char c) {
	switch(c) {
		case '1': case 'Q': case 'A': case 'Z': return 0;
		case '2': case 'W': case 'S': case 'X': return 1;
		case '3': case 'E': case 'D': case 'C': return 2;
		case '4': case '5': case 'R': case 'T': case 'F': case 'G': case 'V': case 'B': return 3;
		case '6': case '7': case 'Y': case 'U': case 'H': case 'J': case 'N': case 'M': return 4;
		case '8': case 'I': case 'K': case ',': return 5;
		case '9': case 'O': case 'L': case '.': return 6;
		case '0': case 'P': case ';': case '/': case '-': case '=': case '[': case ']': case '\'': return 7;
	}
}

int main(void) {
	char s[51];
	int a[8]={0,};
	scanf("%s", s);
	for (int i=0; s[i]!='\0'; i++) {
		a[f(s[i])]++;
	}
	for (int i=0; i<8; i++) printf("%d\n", a[i]);
	return 0;
}

