#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N;
char str[20];
char t[3];

char *itoa(int K) {
	if (K<10) {
		t[0]=K+'0';
		t[1]='\0';
	}
	else {
		t[0]=K/10+'0';
		t[1]=K%10+'0';
		t[2]='\0';
	}
	return t;
}

char *makeString(int K) {
	if (K==0) strcpy(str, "no more bottles");
	else if (K==1) strcpy(str, "1 bottle");
	else {
		strcpy(str, itoa(K));
		strcat(str, " bottles");
	}
	return str;
}

void sing(int K) {
	char s[30];
	strcpy(s, makeString(K));
	if (K==0) {
		printf("No more bottles of beer on the wall, %s of beer.\n", s);
		printf("Go to the store and buy some more, %s of beer on the wall.\n", makeString(N));
		return;
	}
	else {
		printf("%s of beer on the wall, %s of beer.\n", s, s);
		printf("Take one down and pass it around, %s of beer on the wall.\n", makeString(K-1));
		printf("\n");
		sing(K-1);
	}
	return;
}

int main(void) {
	scanf("%d", &N);
	sing(N);
}
