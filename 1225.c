#include <stdio.h>

int main(void) {
	char A[10001], B[10001];
	long long int ans=0;
	scanf("%s %s", A, B);
	for (int i=0; A[i]!='\0'; i++) {
		for (int j=0; B[j]!='\0'; j++) {
			ans+=(A[i]-'0')*(B[j]-'0');
		}
	}
	printf("%lld\n", ans);
	return 0;
}
