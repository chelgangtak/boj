#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a+b+c!=180) printf("Error\n");
	else {
		if (a==60 && b==60 && c==60) printf("Equilateral\n");
		else if (a==b || b==c || c==a) printf("Isosceles\n");
		else printf("Scalene\n");
	}
	return 0;
}
