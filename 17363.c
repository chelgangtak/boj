#include <stdio.h>

char map[100][101];

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) {
		scanf("%s", map[i]);
	}
	
	for (int j=M-1; j>=0; j--) {
		for (int i=0; i<N; i++) {
			switch(map[i][j]) {
				case '-': map[i][j]='|'; break;
				case '|': map[i][j]='-'; break;
				case '/': map[i][j]='\\'; break;
				case '\\': map[i][j]='/'; break;
				case '^': map[i][j]='<'; break;
				case '<': map[i][j]='v'; break;
				case 'v': map[i][j]='>'; break;
				case '>': map[i][j]='^'; break;
			}
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
