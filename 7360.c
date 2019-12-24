#include <stdio.h>

int main(void) {
	int n, a[20], b[20], A, B, f=0;
	while(1) {
		scanf("%d", &n);
		if (n==0) return 0;
		A=0; B=0;
		for (int i=0; i<n; i++) scanf("%d", &a[i]);
		for (int i=0; i<n; i++) scanf("%d", &b[i]);
		for (int i=0; i<n; i++) {
			if (a[i]-b[i]>1) A+=a[i];
			else if (a[i]-b[i]==1) {
				if (a[i]==2) B+=6;
				else B+=a[i]+b[i];
			}
			else if (b[i]-a[i]==1) {
				if (b[i]==2) A+=6;
				else A+=a[i]+b[i];
			}
			else if (b[i]-a[i]>1) B+=b[i];
		}
		if (f==0) f=1;
		else printf("\n");
		printf("A has %d points. B has %d points.\n", A, B);
	}
}
