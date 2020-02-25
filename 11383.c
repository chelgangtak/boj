#include <stdio.h>

int main(void) {
	int N, M, f=0;
	char s[10][11], t[10][21];
	scanf("%d %d", &N, &M);
	for (int i=0; i<N; i++) scanf("%s", s[i]);
	for (int i=0; i<N; i++) scanf("%s", t[i]);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (s[i][j]!=t[i][2*j]||s[i][j]!=t[i][2*j+1]) {
				f=1;
				break;
			}
		}
		if (f==1) break;
	}
	if (f==1) printf("Not ");
	printf("Eyfa\n");
	return 0;
}
