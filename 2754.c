#include <stdio.h>

int main(void) {
	char s[3];
	float p;
	scanf("%s", s);
	if (s[0]=='A') {
		if (s[1]=='+') p=4.3;
		else if (s[1]=='0') p=4.0;
		else p=3.7;
	}
	else if (s[0]=='B') {
		if (s[1]=='+') p=3.3;
		else if (s[1]=='0') p=3.0;
		else p=2.7;
	}
	else if (s[0]=='C') {
		if (s[1]=='+') p=2.3;
		else if (s[1]=='0') p=2.0;
		else p=1.7;
	}
	else if (s[0]=='D') {
		if (s[1]=='+') p=1.3;
		else if (s[1]=='0') p=1.0;
		else p=0.7;
	}
	else p=0.0;
	printf("%.1f\n", p);
	return 0;
}

