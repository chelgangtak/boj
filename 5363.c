#include <stdio.h>

int main(void) {
	int N, start, end, cnt;
	char s[101], tmp;
	scanf("%d", &N);
	scanf("%c", &tmp);
	for (int i=0; i<N; i++) {
		fgets(s, sizeof(s), stdin);
		cnt=0;
		for(int j=0; ; j++) {
			if (s[j]==' ') {
				if (cnt==1) {
					end=j-1;
					start=j+1;
					break;
				}
				else cnt++;
			}
		}
		for (int j=start; s[j]!='\n'; j++) printf("%c", s[j]);
		printf(" ");
		for (int j=0; j<=end; j++) printf("%c", s[j]);
		printf("\n");
	}
	return 0;
}
