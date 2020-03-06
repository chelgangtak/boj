#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int T;
	char c;
	stack<char> s;

	cin >> T;
	getchar();
	for (int i=0; i<T; i++) {
		while(1) {
			scanf("%c", &c);
			if (c==' '||c=='\n') {
				while(!s.empty()) {
					cout << s.top();
					s.pop();
				}
				if (c==' ') cout << c;
				else break;
			}
			else s.push(c);
		}
		cout << endl;
	}
}
