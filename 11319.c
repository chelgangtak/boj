#include <stdio.h>
void f(char a, int *c, int *v) {
	if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u') (*v)++;
	else if (a!=' ') (*c)++;
}

int main(void) {
	int n, c, v;
	char s[1001];
	scanf("%d", &n);
	getchar();
	for (int i=0; i<n; i++) {
		fgets(s, sizeof(s), stdin);
		c=0;
		v=0;
		for (int j=0; s[j]!='\n'; j++) f(s[j], &c, &v);
		printf("%d %d\n", c, v);
	}
	return 0;
}
