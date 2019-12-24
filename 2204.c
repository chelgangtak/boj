#include <stdio.h>
#include <string.h>
char r[21];

char* f(char *s) {
	int i;
	for (i=0; s[i]!='\0'; i++) {
		if (s[i]>='A' && s[i]<='Z') r[i]=s[i]+('a'-'A');
		else r[i]=s[i];
	}
	r[i]='\0';
	return r;
}

int main(void) {
	int n;
	char s[1000][21], t[1000][21],ans[21], tmp[21], tmp2[21];
	
	while(1) {
		scanf("%d", &n);
		if (n==0) break;
		for (int i=0; i<n; i++) scanf("%s", s[i]);
		strcpy(ans, s[0]);
		for (int i=1; i<n; i++) {
			strcpy(tmp, f(ans));
			strcpy(tmp2, f(s[i]));
			//printf("%s, %s\n", tmp, tmp2);
			if (strcmp(tmp, tmp2)>0) strcpy(ans, s[i]);
		}
		printf("%s\n", ans);
	}
	return 0;
}
