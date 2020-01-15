#include <stdio.h>

int main(void) {
	int a[4]={1,2,3,4};
	char s[1000001];
	scanf("%s", s);
	for (int i=0; s[i]!='\0'; i++) {
		int t;
		if (s[i]=='H') {
			t=a[0];
			a[0]=a[2];
			a[2]=t;
			t=a[1];
			a[1]=a[3];
			a[3]=t;
		}
		else {
			t=a[0];
			a[0]=a[1];
			a[1]=t;
			t=a[2];
			a[2]=a[3];
			a[3]=t;
		}
	}
	printf("%d %d\n%d %d\n", a[0], a[1], a[2], a[3]);
	return 0;
}
