#include <stdio.h>

int f(char s[4]) {
	int a=0;
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]=='0'||s[i]=='6') s[i]='9';
		a=a*10+(s[i]-'0');
	}
	if (a>100) a=100;
	return a;
}

int main(void) {
	int N, a;
	double avg=0;
	char s[4];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", s);
		a=f(s);
		avg+=a;
	}
	avg/=N;
	if ((int)avg+1-avg<=avg-(int)avg) printf("%d\n", (int)avg+1);
	else printf("%d\n", (int)avg);
	return 0;
}
