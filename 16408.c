#include <stdio.h>

int main(void) {
	char s[3];
	int v[13]={0,};
	for (int i=0; i<5; i++) {
		scanf("%s", s);
		switch(s[0]) {
			case 'A': v[0]++; break;
			case 'T': v[9]++; break;
			case 'J': v[10]++; break;
			case 'Q': v[11]++; break;
			case 'K': v[12]++; break;
			default: v[s[0]-'0'-1]++; break;
		}
	}
	int ans;
	for (int i=0; i<13; i++) {
		if (i==0||v[i]>ans) ans=v[i];
	}
	printf("%d\n", ans);
	return 0;
}
