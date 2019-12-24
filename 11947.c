#include <stdio.h>

long long int f(long long int a) {
	if (a<10) return 9;
	else if (a<100) return 99;
	else if (a<1000) return 999;
	else if (a<10000) return 9999;
	else if (a<100000) return 99999;
	else if (a<1000000) return 999999;
	else if (a<10000000) return 9999999;
	else if (a<100000000) return 99999999;
	else if (a<1000000000) return 999999999;
	else return 9999999999;
}

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		long long int a;
		scanf("%lld", &a);
		long long int b=f(a);
		if (a<b/2) printf("%lld\n", a*(b-a));
		else printf("%lld\n", (b/2)*(b/2+1));
	}
	return 0;
}
