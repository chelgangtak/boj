#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int T;
	stack<char> s1, s2, s3;
	cin >> T;
	getchar();
	for (int t=0; t<T; t++) {
		char a;
		while(1) {
			scanf("%c", &a);
			if (a==' ') break;
			s1.push(a);
		}
		while(1) {
			scanf("%c", &a);
			if (a=='\n') break;
			s2.push(a);
		}
		int carry=0;
		while (!s1.empty()&&!s2.empty()) {
			//cout << "s1: " << s1.top() << ", s2: " << s2.top() << endl;
			int sum=s1.top()-'0'+s2.top()-'0'+carry;
			//cout << "sum: " << sum << endl;
			s1.pop();
			s2.pop();
			if (sum==1||sum==3) s3.push('1');
			else s3.push('0');
			if (sum>=2) carry=1;
			else carry=0;
		}
		if (s1.empty()) {
			while (!s2.empty()) {
				//cout << "s2: " << s2.top() << endl;
				int sum=s2.top()-'0'+carry;
				//cout << "sum: " << sum << endl;
				s2.pop();
				if (sum==1) s3.push('1');
				else s3.push('0');
				if (sum>=2) carry=1;
				else carry=0;
			}
		}
		else {
			while (!s1.empty()) {
				//cout << "s1: " << s1.top() << endl;
				int sum=s1.top()-'0'+carry;
				//cout << "sum: " << sum << endl;
				s1.pop();
				if (sum==1) s3.push('1');
				else s3.push('0');
				if (sum>=2) carry=1;
				else carry=0;
			}
		}
		if (carry==1) s3.push('1');
		while (!s3.empty()&&s3.top()=='0') s3.pop();
		if (s3.empty()) cout << "0";
		while (!s3.empty()) {
			cout << s3.top();
			s3.pop();
		}
		cout << endl;
	}
	return 0;
}
