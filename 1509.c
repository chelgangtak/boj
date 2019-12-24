#include <stdio.h>
#include <string.h>

char s[2501];
int d[2500][2500];
int D[2500];

int main(void) {
	scanf("%s", s);
	int len=strlen(s);
	for (int i=0; i<len; i++) {
		for (int j=i; j<len; j++) d[i][j]=-1;
	}
	for (int i=0; i<len; i++) {
		d[i][i]=1;
	}
	for (int i=0; i<len-1; i++) {
		if (s[i]==s[i+1]) d[i][i+1]=1;
	}
	for (int k=2; k<len; k++) {
		for (int i=0; i+k<len; i++) {
			int j=i+k;
			if (s[i]==s[j]) d[i][j]=d[i+1][j-1];
		}
	}

	D[0]=1;
	for (int i=0; i<len; i++) {
		D[i]=-1;
		for (int j=0; j<=i; j++) {
			if (d[j][i]==1) {
				//printf("%d~%d\n", j, i);
				if (j==0) D[i]=1;
				if (D[i]==-1 || D[j-1]+1 < D[i]) D[i]=D[j-1]+1;
			}
		}
	}
	printf("%d\n", D[len-1]);
	return 0;
}
