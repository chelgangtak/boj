#include <stdio.h>
#include <stdlib.h>

long int Round(double x) {
	double y;
	if (x<0) y=-x;
	else y=x;
	if ((long int)(y*10)%10>=5) {
		if (x>=0) return (long int)y+1;
		else return ((long int)y+1)*(-1);
	}
	else {
		if (x>=0) return (long int)y;
		else return (long int)y*(-1);
	}
}

int cmp(const void *a, const void *b) {
	int *pa=(int*)a, *pb=(int*)b;
	if (*pa < *pb) return -1;
	else if (*pa > *pb) return 1;
	else return 0;
}

int main(void) {
	int N, a[500000], v[8001]={0,}, b, first=0;
	long int avg=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", &a[i]);
		avg+=a[i];
		v[a[i]+4000]++;
	}
	printf("%ld\n", Round((double)avg/N));
	qsort(a, N, sizeof(int), cmp);
	printf("%d\n", a[N/2]);
	for (int i=0; i<8001; i++) {
		if (i==0) b=i;
		else if (v[i]>v[b]) {
			first=0;
			b=i;
		}
		else if (v[i]==v[b]) {
			if (first==0) {
				first=1;
				b=i;
			}
		}
	}
	printf("%d\n", b-4000);
	printf("%d\n", a[N-1]-a[0]);
	return 0;
}
