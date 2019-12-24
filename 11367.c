#include <stdio.h>

int main(void) {
	int n, a;
	char s[10];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%s %d", s, &a);
		printf("%s ", s);
		if (a>=97) printf("A+\n");
		else if (a>=90) printf("A\n");
		else if (a>=87) printf("B+\n");
		else if (a>=80) printf("B\n");
		else if (a>=77) printf("C+\n");
		else if (a>=70) printf("C\n");
		else if (a>=67) printf("D+\n");
		else if (a>=60) printf("D\n");
		else printf("F\n");
	}
	return 0;
}
