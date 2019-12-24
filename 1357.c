#include <stdio.h>

int Rev(int X) {
	int a=1, t=X, r, sum=0;
	while (t>=10) {
		a*=10;
		t/=10;
	}
	t=X;
	while (t>0) {
		r=t%10;
		sum=sum+r*a;
		a/=10;
		t/=10;
	}
	return sum;
}

int main(void) {
	int X, Y;
	scanf("%d %d", &X, &Y);
	printf("%d\n", Rev(Rev(X)+Rev(Y)));
	return 0;
}
