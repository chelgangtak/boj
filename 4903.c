#include <stdio.h>

int main(void) {
	int a[11][11], A, B;
	for (int i=0; i<=10; i++) {
		for (int j=0; j<=i; j++) {
			if (j==0||j==i) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	while(1) {
		scanf("%d %d", &A, &B);
		if (A==-1&&B==-1) return 0;
		printf("%d+%d", A, B);
		if (A+B!=a[A+B][B]) printf("!");
		printf("=%d\n", A+B);
	}
}
