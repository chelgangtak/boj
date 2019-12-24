#include <stdio.h>

int main(void) {
	char s[50];
	int ans=5000;
	fgets(s, sizeof(s), stdin);
	for (int i=0; s[i]!='\n'; i++) {
		if (s[i]=='1') ans-=500;
		else if (s[i]=='2') ans-=800;
		else if (s[i]=='3') ans-=1000;
	}
	printf("%d\n", ans);
	return 0;
}
