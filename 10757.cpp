#include <iostream>
#include <stack>
using namespace std;
stack<char> sa, sb;
stack<int> sc;

char a[10010], b[10010], c[10010];

void sum() {
	int na, nb, carry=0;
	for (int i=0; a[i]!='\0'; i++) sa.push(a[i]);
	for (int i=0; b[i]!='\0'; i++) sb.push(b[i]);
	while (!sa.empty() && !sb.empty()) {
		na=sa.top()-'0';
		nb=sb.top()-'0';
		sc.push((na+nb+carry)%10);
		if (na+nb+carry>=10) carry=1;
		else carry=0;
		sa.pop();
		sb.pop();
	}
	if (sa.empty() && !sb.empty()) {
		while (!sb.empty()) {
			nb=sb.top()-'0';
			sc.push((nb+carry)%10);
			if (nb+carry>=10) carry=1;
			else carry=0;
			sb.pop();
		}
		if (carry==1) sc.push(1);
	}
	else if (sb.empty() && !sa.empty()) {
		while (!sa.empty()) {
			na=sa.top()-'0';
			sc.push((na+carry)%10);
			if (na+carry>=10) carry=1;
			else carry=0;
			sa.pop();
		}
		if (carry==1) sc.push(1);
	}
	else if (carry==1) sc.push(1);
}

int main(void) {
	scanf("%s %s", a, b);
	sum();
	while (!sc.empty()) {
		printf("%d", sc.top());
		sc.pop();
	}
	printf("\n");
	return 0;
}
