#include <stdio.h>

int f(char *s, char *t) {
	int r=0, k, j;
	for (int i=0; t[i]!='\0'; i++) {
		k=0;
		j=i;
		while(s[k]!='\0') {
			if (t[j+k]!=s[k]) break;
			//printf("t[%d] = s[%d] = %c\n", j+k, k, t[j+k]);
			k++;
			if (t[j+k]=='\0') j=-k;
		}
		if (s[k]=='\0') {
			return 1;
		}
	}
	return r;
}

int main(void) {
	char s[11], t[11];
	int N, cnt=0;

	scanf("%s", s);
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", t);
		if (f(s, t)==1) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
