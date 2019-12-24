#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int len;
	int sum;
	char s[51];
} Serial;

Serial a[1000];

int f(char *s) {
	int sum=0;
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]>='0' && s[i]<='9') sum+=s[i]-'0';
	}
	return sum;
}

int cmp(const void *a, const void *b) {
	Serial *pa=(Serial*)a, *pb=(Serial*)b;
	if (pa->len < pb->len) return -1;
	else if (pa-> len > pb->len) return 1;
	else {
		if (pa->sum < pb->sum) return -1;
		else if (pa->sum > pb->sum) return 1;
		else return strcmp(pa->s, pb->s);
	}
}

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", a[i].s);
		a[i].len=strlen(a[i].s);
		a[i].sum=f(a[i].s);
	}
	qsort(a, N, sizeof(Serial), cmp);
	for (int i=0; i<N; i++) printf("%s\n", a[i].s);
	return 0;
}
