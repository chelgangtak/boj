#include <stdio.h>

int main(void) {
	int a[9], b[9], sa=0, sb=0, ans=0;
	for (int i=0; i<9; i++) {
		scanf("%d", &a[i]);
	}
	for (int i=0; i<9; i++) scanf("%d", &b[i]);
	for (int i=0; i<9; i++) {
		sa+=a[i];
		if (sa>sb) ans=1;
		sb+=b[i];
	}
	if (ans==1) printf("Yes\n");
	else printf("No\n");
	return 0;
}
