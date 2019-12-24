#include <stdio.h>

void f(int m) {
	int t=m, k=0;
	char s[7];
	while (t>0) {
		t--;
		s[k++]=(t%26)+'A';
		t/=26;
	}
	s[k]='\0';
	for (int i=k-1; i>=0; i--) printf("%c", s[i]);
}

int main(void) {
	int n, m;
	while (1) {
		scanf("R%dC%d", &n, &m);
		getchar();
		if (n==0 && m==0) break;
		f(m);
		printf("%d\n", n);
	}
	return 0;
}
