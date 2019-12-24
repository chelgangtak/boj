#include <stdio.h>

int main(void) {
	int A, B, C, start, end, ans=0;
	int t[100];
	for (int i=1; i<100; i++) t[i]=0;
	scanf("%d %d %d", &A, &B, &C);
	for(int i=0; i<3; i++) {
		scanf("%d %d", &start, &end);
		for (int j=start; j<end; j++) t[j]++;
	}
	for (int i=1; i<100; i++) {
		if (t[i]==1) ans+=A;
		else if (t[i]==2) ans+=B*2;
		else if (t[i]==3) ans+=C*3;
	}
	printf("%d\n", ans);
	return 0;
}
