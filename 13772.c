#include <stdio.h>

int main(void) {
	int N, cnt;
	char s[300];
	scanf("%d", &N);
	getchar();
	for (int i=0; i<N; i++) {
		fgets(s, sizeof(s), stdin);
		cnt=0;
		for (int j=0; s[j]!='\n'; j++) {
			if (s[j]=='A'||s[j]=='D'||s[j]=='O'||s[j]=='P'||s[j]=='Q'||s[j]=='R') cnt++;
			else if (s[j]=='B') cnt+=2;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
