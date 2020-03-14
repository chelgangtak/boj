#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, prev, cur;
	while(1) {
		if (scanf("%d", &n)==EOF) return 0;
		prev=0;
		int v[3000]={0,};
		for (int i=0; i<n; i++) {
			scanf("%d", &cur);
			v[abs(prev-cur)]++;
			prev=cur;
		}
		int f=0;
		for (int i=1; i<=n-1; i++) {
			if (v[i]==0) {
				f=1;
				break;
			}
		}
		if (f==0) printf("Jolly\n");
		else printf("Not jolly\n");
	}
}
