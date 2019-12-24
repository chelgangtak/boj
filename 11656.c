#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
	char temp[1001];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

int main(void) {
	char s[1001], a[1001][1001], *p;
	int i=0;

	scanf("%s", s);
	for (p=s; *p!='\0'; p++) {
		strcpy(a[i], p);
		i++;
	}
	int n=i;

	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-1-i; j++) {
			if (strcmp(a[j], a[j+1])>0) {
				swap(a[j], a[j+1]);
			}
		}
	}

	for (int i=0; i<n; i++) printf("%s\n", a[i]);
	return 0;
}
