#include <stdio.h>
#include <math.h>

void hanoi(int N, char S, char A, char D) {
	if (N==0) return;
	hanoi(N-1, S, D, A);
	printf("%c %c\n", S, D);
	hanoi(N-1, A, S, D);
}

int main(void) {
	int N;
	scanf("%d", &N);
	printf("%d\n", (int)(pow(2, N)-1));
	hanoi(N,'1', '2', '3');
	return 0;
}
