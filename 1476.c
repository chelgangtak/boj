#include <stdio.h>

int main(void) {
	int E, S, M;
	int e=15, s=28, m=19;
	int r1, r2, r3;
	scanf("%d %d %d", &E, &S, &M);
	int T=e*s*m;
	for (r1=1; r1<e; r1++) {
		if (T/e*r1%e==E) break;
	}
	for (r2=1; r2<s; r2++) {
		if (T/s*r2%s==S) break;
	}
	for (r3=1; r3<m; r3++) {
		if (T/m*r3%m==M) break;
	}
	int ans=T/e*r1+T/s*r2+T/m*r3;
	if (ans%T!=0) ans=ans%T;
	else ans=7980;
	printf("%d\n", ans);
	return 0;
}
