#include <iostream>
#include <stack>
using namespace std;

stack<char> s1, s2, s3;

int main(void) {
	char c;
	int carry=0;
	while(1) {
		scanf("%c", &c);
		if (c==' ') break;
		s1.push(c);
	}
	while(1) {
		scanf("%c", &c);
		if (c=='\n') break;
		s2.push(c);
	}
	while (!s1.empty()&&!s2.empty()) {
		int n1=s1.top()-'0';
		int n2=s2.top()-'0';
		s1.pop();
		s2.pop();
		int sum=n1+n2+carry;
		if (sum==1||sum==3) s3.push('1');
		else s3.push('0');
		if (sum>=2) carry=1;
		else carry=0;
	}
	if (s1.empty()) {
		while(!s2.empty()) {
			int sum=s2.top()-'0'+carry;
			s2.pop();
			if (sum==1||sum==3) s3.push('1');
			else s3.push('0');
			if (sum>=2) carry=1;
			else carry=0;
		}
	}
	else {
		while(!s1.empty()) {
			int sum=s1.top()-'0'+carry;
			s1.pop();
			if (sum==1||sum==3) s3.push('1');
			else s3.push('0');
			if (sum>=2) carry=1;
			else carry=0;
		}
	}
	if (carry==1) s3.push('1');
	while(!s3.empty()&&s3.top()=='0') s3.pop();
	if (s3.empty()) printf("0");
	while(!s3.empty()) {
		printf("%c", s3.top());
		s3.pop();
	}
	printf("\n");
	return 0;
}
