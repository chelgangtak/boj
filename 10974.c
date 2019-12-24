#include <stdio.h>

int a[8], N;

void R(int i, int j) {
	//printf("%d~%d\n", i, j);
	int tmp=a[j];
	for (int k=j; k>i; k--) a[k]=a[k-1];
	a[i]=tmp;
}

void L(int i, int j) {
	//printf("%d~%d\n", i, j);
	int tmp=a[i];
	for (int k=i; k<j; k++) a[k]=a[k+1];
	a[j]=tmp;
}

void PRINT() {
	for (int i=0; i<N; i++) printf("%d ", a[i]);
	printf("\n");
}

void p(int depth) {
	if (depth==N) {
		PRINT();
		return;
	}
	for (int i=depth; i<N; i++) {
		R(depth, i);
		p(depth+1);
		L(depth, i);
	}
}

int main(void) {
	scanf("%d", &N);
	for (int i=0; i<N; i++) a[i]=i+1;
	p(0);
	return 0;
}
