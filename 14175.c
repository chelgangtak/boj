#include <stdio.h>

int main(void) {
	int M, N, K;
	char s[11];
	scanf("%d %d %d", &M, &N, &K);
	for (int i=0; i<M; i++) {
		scanf("%s", s);
		for (int k=0; k<K; k++) {
			int cnt=0;
			for (int j=0; j<N; j++) {
				if (j>0&&s[j]!=s[j-1]) {
					for (int t=0; t<cnt*K; t++) {
						printf("%c", s[j-1]);
					}
					cnt=1;
				}
				else cnt++;
			}
			for (int t=0; t<cnt*K; t++) printf("%c", s[N-1]);
			printf("\n");
		}	
	}
	return 0;
}
