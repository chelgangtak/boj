#include <stdio.h>

int main(void) {
	int T, N;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &N);
		getchar();
		int f=0;
		for (int i=0; i<N; i++) {
			char a, b, c;
			scanf("%c%c%c", &a, &b, &c);
			getchar();
			if ((a=='0'&&b=='0')||(b=='0'&&c=='0')) f=1;
		}
		printf("Case %d: ", t+1);
		if (f==1) printf("Fallen\n");
		else printf("Standing\n");
	}
	return 0;
}
