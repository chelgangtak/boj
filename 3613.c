#include <stdio.h>

int isJava(char *s) {
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]>='A'&&s[i]<='Z') {
			if (i==0) return 0;
		}
		else if (s[i]<'a'||s[i]>'z') return 0;
	}
	return 1;
}

int isC(char *s) {
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]>='a'&&s[i]<='z') continue;
		else if (s[i]=='_') {
			if (i==0||s[i+1]=='\0'||s[i+1]=='_') return 0;
		}
		else return 0;
	}
	return 1;
}

void JavatoC(char* s) {
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]>='A'&&s[i]<='Z') printf("_%c", s[i]-'A'+'a');
		else printf("%c", s[i]);
	}
	printf("\n");
}

void CtoJava(char *s) {
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]=='_') {
			i++;
			printf("%c", s[i]-'a'+'A');
		}
		else printf("%c", s[i]);
	}
	printf("\n");
}

int main(void) {
	char s[101];
	scanf("%s", s);
	//printf("%d\n", isC(s));
	if (isJava(s)==1) JavatoC(s);
	else if (isC(s)==1) CtoJava(s);
	else printf("Error!\n");
	return 0;
}
