#include <stdio.h>
#include <string.h>

char s[81];
int success=0;

int check(int i, int n) {
	s[i]=n+'0';
	//printf("%s!\n", s);
	char *a, *b;
	for (int j=1; i-2*j+1>=0; j++) {
		a=&s[i-2*j+1];
		b=&s[i-j+1];
		if (strncmp(a, b, j)==0) return -1;
	}
	return 1;
}

void f(int i, int N) {
	//printf("%s!\n", s);
	if (i==N) {
		printf("%s\n", s);
		success=1;
		return;
	}
	for (int n=1; n<=3; n++) {
		if (check(i, n)==1) f(i+1, N);
		if (success==1) return;
	}
}

int main(void) {
	int N;
	scanf("%d", &N);
	f(0, N);
	return 0;
}
