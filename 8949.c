#include <stdio.h>
#include <string.h>

int main(void) {
	char a[8], b[8];
	int c[10], i, j, k=0, la, lb;
	scanf("%s %s", a, b);
	i=strlen(a)-1;
	j=strlen(b)-1;
	while(i>=0&&j>=0) c[k++]=(a[i--]-'0')+(b[j--]-'0');
	if (i<0) {
		while (j>=0) c[k++]=b[j--]-'0';
	}
	else {
		while (i>=0) c[k++]=a[i--]-'0';
	}
	for (i=k-1; i>=0; i--) printf("%d", c[i]);
	printf("\n");
	return 0;
}
