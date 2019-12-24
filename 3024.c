#include <stdio.h>

int main(void) {
	int N;
	char a[30][30];
	scanf("%d", &N);
	getchar();
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			scanf("%c", &a[i][j]);
		}
		getchar();
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N-2; j++) {
			if (a[i][j]!='.'&&a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]) {
				printf("%c\n", a[i][j]);
				return 0;
			}
		}
	}
	for (int j=0; j<N; j++) {
		for (int i=0; i<N-2; i++) {
			if (a[i][j]!='.'&&a[i][j]==a[i+1][j]&&a[i+1][j]==a[i+2][j]) {
				printf("%c\n", a[i][j]);
				return 0;
			}
		}
	}
	for (int i=0; i<N-2; i++) {
		for (int j=0; j<N-2; j++) {
			if (a[i][j]!='.'&&a[i][j]==a[i+1][j+1]&&a[i+1][j+1]==a[i+2][j+2]) {
				printf("%c\n", a[i][j]);
				return 0;
			}
		}
	}
	for (int i=0; i<N-2; i++) {
		for (int j=N-1; j>=2; j--) {
			if (a[i][j]!='.'&&a[i][j]==a[i+1][j-1]&&a[i+1][j-1]==a[i+2][j-2]) {
				printf("%c\n", a[i][j]);
				return 0;
			}
		}
	}
	printf("ongoing\n");
	return 0;
}
