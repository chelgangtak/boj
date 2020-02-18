#include <stdio.h>

int main(void) {
	int T, a, b;
	char s[10];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%s", s);
		if (s[0]=='P') {
			printf("skipped\n");
			continue;
		}
		sscanf(s, "%d+%d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}
