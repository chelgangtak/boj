#include <stdio.h>

int main(void) {
	char a[100][100];
	int R, C, A, B;
	scanf("%d %d", &R, &C);
	getchar();
	for (int i=0; i<R; i++) {
		for (int j=0; j<C; j++) {
			scanf("%c", &a[i][j]);
			a[i][2*C-1-j]=a[i][j];
			a[2*R-1-i][j]=a[i][j];
			a[2*R-1-i][2*C-1-j]=a[i][j];
		}
		getchar();
	}
	scanf("%d %d", &A, &B);
	A--; B--;
	if (a[A][B]=='#') a[A][B]='.';
	else a[A][B]='#';
	for (int i=0; i<2*R; i++) {
		for (int j=0; j<2*C; j++) printf("%c", a[i][j]);
		printf("\n");
	}
	return 0;
}
