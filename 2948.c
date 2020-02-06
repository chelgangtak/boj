#include <stdio.h>

int main(void) {
	int M, D, sum=0;
	char s[7][10]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	scanf("%d %d", &D, &M);
	for (int i=1; i<M; i++) {
		switch(i) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				sum+=31; break;
			case 2:
				sum+=28; break;
			default:
				sum+=30; break;
		}
	}
	sum+=D+2;
	printf("%s\n", s[sum%7]);
	return 0;
}
