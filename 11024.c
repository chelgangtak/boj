#include <stdio.h>

int main(void) {
	int T, a, sum;
	char s[610];
	scanf("%d", &T);
	getchar();
	for (int t=0; t<T; t++) {
		sum=0;
		a=0;
		fgets(s, sizeof(s), stdin);
		for (int i=0; s[i]; i++) {
			if (s[i]==' '||s[i]=='\n') {
				sum+=a;
				a=0;
			}
			else a=a*10+(s[i]-'0');
		}
		printf("%d\n", sum);
	}
	return 0;
}
