#include <stdio.h>

int main(void) {
	int T, f;
	char s[10001];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		f=0;
		scanf("%s", s);
		if (s[7]!='\0') f=1;
		char A=s[0];
		char B=s[2];
		if (s[1]!=A||s[4]!=A) f=1;
		if (s[3]!=B||s[5]!=B||s[6]!=B) f=1;
		if (A==B) f=1;
		printf("%d\n", 1-f);
	}
	return 0;
}
