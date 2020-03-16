#include <stdio.h>
#include <string.h>

char Morse[26][5]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

void f(char *p) {
	for (int i=0; i<26; i++) {
		if (strcmp(p, Morse[i])==0) {
			printf("%c", 'A'+i);
			return;
		}
	}
}

int main(void) {
	int T;
	char s[30];
	scanf("%d", &T);
	getchar();
	for (int t=0; t<T; t++) {
		fgets(s, sizeof(s), stdin);
		char p[5];
		int n=0;
		printf("Case %d: ", t+1);
		for (int i=0; ; i++) {
			if (s[i]==' '||s[i]=='\n') {
				p[n]='\0';
				f(p);
				if (s[i]=='\n') {
					printf("\n");
					break;
				}
				n=0;
			}
			else p[n++]=s[i];
		}
	}
	return 0;
}
