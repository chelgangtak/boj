#include <stdio.h>

int main(void) {
	int ans=1, a[4];
	for (int i=0; i<4; i++) {
		scanf("%d", &a[i]);
		if (i==0||i==3) {
			if (a[i]!=8&&a[i]!=9) ans=0;
		}
		else if (i==2&&a[i]!=a[i-1]) ans=0;
	}
	if (ans==1) printf("ignore\n");
	else printf("answer\n");
	return 0;
}
