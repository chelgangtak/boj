#include <stdio.h>

char a[400][400];

int main(void) {
	int N, M, R, G, B, I;
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%d %d %d", &R, &G, &B);
			I=2126*R+7152*G+722*B;
			if (I>=2040000) a[i][j]='.';
			else if (I>=1530000) a[i][j]='-';
			else if (I>=1020000) a[i][j]='+';
			else if (I>=510000) a[i][j]='o';
			else if (I>=0) a[i][j]='#';
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) printf("%c", a[i][j]);
		printf("\n");
	}
	return 0;
}
