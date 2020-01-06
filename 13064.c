#include <stdio.h>

int main(void) {
	int n;
	char s[9];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%s", s);
		int suc=1;
		for (int j=0; s[j]!='\0'; j++) {
			if (j!=4) {
				if (s[j]<'1'||s[j]>'9') {
					suc=0;
					break;
				}
				if (j==0&&s[j]!=s[j+1]) {
					suc=0;
					break;
				}
			}
			else if (s[j]<'A'||s[j]>'Z') {
				suc=0;
				break;
			}
		}
		if (suc==1) printf("%s\n", s);
	}
	return 0;
}
