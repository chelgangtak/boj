#include <iostream>
#include <stack>
using namespace std;
stack<char> s;

int main(void) {
	char c;
	int open=0;
	while(1) {
		scanf("%c", &c);
		if (c=='>') {
			printf(">");
			open=0;
		}
		else if (open==1) printf("%c", c);
		else if (c==' '||c=='<'||c=='\n') {
			while(!s.empty()) {
				printf("%c", s.top());
				s.pop();
			}
			printf("%c", c);
			if (c=='<') open=1;
			if (c=='\n') return 0;
		}
		else s.push(c);
	}
}
