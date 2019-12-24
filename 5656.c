#include <stdio.h>
#include <string.h>

int main(void) {
	char s[100], op[3];
	int a, b, flag=0, cnt=1;
	while (1) {
		fgets(s, sizeof(s), stdin);
		sscanf(s, "%d %s %d", &a, op, &b);
		//printf("a: %d, op: %s, b: %d\n", a, op , b);
		if (strcmp(op, "E")==0) return 0;
		if (strcmp(op, ">")==0) {
			if (a>b) flag=1;
			else flag=0;
		}
		else if (strcmp(op, ">=")==0) {
			if (a>=b) flag=1;
			else flag=0;
		}
		else if (strcmp(op, "<")==0) {
			if (a<b) flag=1;
			else flag=0;
		}
		else if (strcmp(op, "<=")==0) {
			if (a<=b) flag=1;
			else flag=0;
		}
		else if (strcmp(op, "==")==0) {
			if (a==b) flag=1;
			else flag=0;
		}
		else if (strcmp(op, "!=")==0) {
			if (a!=b) flag=1;
			else flag=0;
		}
		printf("Case %d: ", cnt++);
		if (flag==1) printf("true\n");
		else printf("false\n");
	}
}
