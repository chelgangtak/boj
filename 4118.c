#include <stdio.h>

int main(void) {
	int N, a;
	while(1) {
		scanf("%d", &N);
		if (N==0) return 0;
		int v[50]={0,};
		for (int i=0; i<N; i++) {
			for (int j=0; j<6; j++) {
				scanf("%d", &a);
				v[a]=1;
			}
		}
		int f=0;
		for (int i=1; i<=49; i++) {
			if (v[i]==0) {
				f=1;
				break;
			}
		}
		if (f==1) printf("No\n");
		else printf("Yes\n");
	}
}
