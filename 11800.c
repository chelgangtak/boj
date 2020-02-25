#include <stdio.h>

int main(void) {
	char x[7][15]={"Beesh", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
	char y[7][15]={"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
	int T, a, b;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d %d", &a, &b);
		printf("Case %d: ", t+1);
		if (a==b) printf("%s\n", y[a]);
		else {
			if (a<b) {
				int t=a;
				a=b;
				b=t;
			}
			if (a==6&&b==5) b=0;
			printf("%s %s\n", x[a], x[b]);
		}
	}
	return 0;
}
