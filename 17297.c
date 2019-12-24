#include <stdio.h>

long int m[55];

int f(long int M) {
	//printf("%ld\n", M);
	if (M<=m[2]) return M;
	for (int i=1; ; i++) {
		if (M>m[i] && M<=m[i+1]) {
			//printf("i: %d, m[%d]: %ld, m[%d]: %ld\n", i, i, m[i], i+1, m[i+1]);
			return f(M-m[i]-1);
		}
	}
}

int main(void) {
	long int M;
	char s[15]=" Messi Gimossi";
	m[1]=5;
	m[2]=13;
	for (int i=3; i<=70; i++) {
		m[i]=m[i-1]+m[i-2]+1;
	}
	scanf("%ld", &M);
	M=f(M);
	//printf("%ld\n", M);
	if (M!=0 && M!=6) printf("%c\n", s[M]);
	else printf("Messi Messi Gimossi\n");
	return 0;
}
