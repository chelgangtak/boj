#include <stdio.h>

int main(void) {
	int S1, S2, S3, v[81]={0,}, ans=0;
	scanf("%d %d %d", &S1, &S2, &S3);
	for (int i=1; i<=S1; i++) {
		for (int j=1; j<=S2; j++) {
			for (int k=1; k<=S3; k++) {
				v[i+j+k]++;
			}
		}
	}
	for (int i=3; i<=S1+S2+S3; i++) {
		if (i==3) ans=i;
		else if (v[i]>v[ans]) ans=i;
	}
	printf("%d\n", ans);
	return 0;
}
