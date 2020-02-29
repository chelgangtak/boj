#include <stdio.h>

int main(void) {
	char s[17];
	for (int i=0; i<8; i++) scanf("%c", &s[2*i]);
	getchar();
	for (int i=0; i<8; i++) scanf("%c", &s[2*i+1]);
	s[16]='\0';
	for (int i=1; i<=14; i++) {
		for (int j=0; j<16-i; j++) {
			s[j]=((s[j]-'0')+(s[j+1]-'0'))%10+'0';
		}
	}
	printf("%c%c\n", s[0], s[1]);
	return 0;
}
