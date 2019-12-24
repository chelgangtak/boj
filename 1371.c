#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char c;
	int cnt;
} Alpha;

int cmp(const void *a, const void *b) {
	Alpha *pa=(Alpha*)a, *pb=(Alpha*)b;
	if ((pa->cnt)>(pb->cnt)) return -1;
	else if ((pa->cnt)<(pb->cnt)) return 1;
	else return 0;
}

int main(void) {
	Alpha a[26];
	char c;
	for (int i=0; i<26; i++) {
		a[i].c='a'+i;
		a[i].cnt=0;
	}
	while ((c=fgetc(stdin))!=EOF) {
		if (c!=' '&&c!='\n') a[c-'a'].cnt++;
	}
	qsort(a, 26, sizeof(Alpha), cmp);
	printf("%c", a[0].c);
	for (int i=1; i<26; i++) {
		if (a[i].cnt==a[0].cnt) printf("%c", a[i].c);
	}
	printf("\n");
	return 0;
}
