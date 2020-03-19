#include <stdio.h>

int f(char a, char b, char c) {
	char t[3];
	t[0]=a;
	t[1]=b;
	t[2]=c;
	int k=4, r=0;
	for (int i=0; i<3; i++) {
		if (t[i]=='H') r+=k;
		k/=2;
	}
	return r;
}

int main(void) {
	int P;
	char s[41];
	scanf("%d", &P);
	for (int t=0; t<P; t++) {
		scanf("%s", s);
		int v[8]={0,};
		for (int i=0; i<38; i++) {
			int n=f(s[i], s[i+1], s[i+2]);
			v[n]++;
		}
		for (int i=0; i<8; i++) printf("%d ", v[i]);
		printf("\n");
	}
	return 0;
}
