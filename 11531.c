#include <stdio.h>
#include <string.h>

int cnt[26]={0,};

int main(void) {
	int t, n=0, sum=0;
	char c, s[6];
	while(1) {
		scanf("%d", &t);
		getchar();
		if (t==-1) break;
		scanf("%c %s", &c, s);
		if (strcmp(s, "wrong")==0) cnt[c-'A']++;
		else {
			if (cnt[c-'A']==-1) continue;
			n++;
			sum+=t+cnt[c-'A']*20;
			cnt[c-'A']==-1;
		}
	}
	printf("%d %d\n", n, sum);
	return 0;
}
