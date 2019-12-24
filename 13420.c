#include <stdio.h>

int main(void) {
	long int T, a, b, c, ans;
	char o;
	scanf("%ld", &T);
	for (int t=0; t<T; t++) {
		scanf("%ld %c %ld = %ld", &a, &o, &b, &c);
		switch(o) {
			case '+': ans=a+b; break;
			case '-': ans=a-b; break;
			case '*': ans=a*b; break;
			case '/': ans=a/b; break;
		}
		if (ans==c) printf("correct\n");
		else printf("wrong answer\n");
	}
	return 0;
}
