#include <stdio.h>
#include <string.h>

long f(char *s) {
	long r=0, a=1;
	int len=strlen(s);
	for (int i=len-1; i>=0; i--) {
		r=r+(s[i]-'0')*a;
		a*=2;
	}
	return r;
}

void g(long a) {
	int stack[61], top=0;
	while (a>0) {
		stack[top++]=a%2;
		a/=2;
	}
	for (int i=top-1; i>=0; i--) printf("%d", stack[i]);
	printf("\n");
}

int main(void) {
	char s[31];
	long a, b;
	scanf("%s", s);
	a=f(s);
	scanf("%s", s);
	b=f(s);
	a=a*b;
	g(a);
	return 0;
}
