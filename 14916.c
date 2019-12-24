#include <stdio.h>

int d[100000];

int main(void) {
	int n;
	scanf("%d", &n);
	d[0]=0;
	for (int i=1; i<=n; i++) {
		if (i-2<0) d[i]=-1;
		else if (i-5<0) {
			if (d[i-2]==-1) d[i]=-1;
			else d[i]=d[i-2]+1;
		}
		else {
			if (d[i-5]==-1) {
				if (d[i-2]==-1) d[i]==-1;
				else d[i]=d[i-2]+1;
			}
			else if (d[i-2]==-1) d[i]=d[i-5]+1;
			else {
				if (d[i-2]<d[i-5]) d[i]=d[i-2]+1;
				else d[i]=d[i-5]+1;
			}
		}
	}
	printf("%d\n", d[n]);
	return 0;
}
