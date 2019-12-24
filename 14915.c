#include <stdio.h>

int main(void) {
	int m, n;
	char s[30];
	scanf("%d %d", &m, &n);
	int t=m, i=0;
	if (m==0) {
		printf("0\n");
		return 0;
	}
	while (t>0) {
		int r=t%n;
		if(r<10) s[i++]='0'+r;
		else if (r==10) s[i++]='A';
		else if (r==11) s[i++]='B';
		else if (r==12) s[i++]='C';
		else if (r==13) s[i++]='D';
		else if (r==14) s[i++]='E';
		else if (r==15) s[i++]='F';
		t/=n;
	}
	for (int j=i-1; j>=0; j--) printf("%c", s[j]);
	printf("\n");
	return 0;
}
