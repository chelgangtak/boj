#include <stdio.h>
#include <string.h>

int main(void) {
	char s[110], t[110], w[20][21];
	int N, len[20];
	scanf("%s", s);
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", w[i]);
		len[i]=strlen(w[i]);
	}
	for (int r=0; r<=25; r++) {
		strcpy(t, s);
		for (int i=0; t[i]!='\0'; i++) {
			if (t[i]+r>'z') t[i]=t[i]+r-'z'-1+'a';
			else t[i]=t[i]+r;
		}
		for (int i=0; i<N; i++) {
			for (char *p=t; *p!='\0'; p++) {
				if (strncmp(p, w[i], len[i])==0) {
					printf("%s\n", t);
					return 0;
				}
			}	
		}

	}
}
