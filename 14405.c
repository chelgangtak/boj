#include <stdio.h>
#include <string.h>

int main(void) {
	char s[5010];
	scanf("%s", s);

	for (char *p=s; *p!='\0'; ) {
		if(*p=='p') {
			if (strncmp(p, "pi", 2)==0) p+=2;
			else {
				printf("NO\n");
				return 0;
			}
		}
		else if (*p=='k') {
			if (strncmp(p, "ka", 2)==0) p+=2;
			else {
				printf("NO\n");
				return 0;
			}
		}
		else if (*p=='c') {
			if (strncmp(p, "chu", 3)==0) p+=3;
			else {
				printf("NO\n");
				return 0;
			}
		}
		else {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
