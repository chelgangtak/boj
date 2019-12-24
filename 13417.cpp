#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	int T, N;
	char s[2100];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		deque<char> d;
		scanf("%d", &N);
		getchar();
		fgets(s, sizeof(s), stdin);
		for (int i=0; s[i]!='\n'; i++) {
			if (s[i]==' ') continue;
			if (d.empty()) d.push_back(s[i]);
			else {
				if (d.front()>=s[i]) d.push_front(s[i]);
				else d.push_back(s[i]);
			}
		}
		for (int i=0; i<d.size(); i++) printf("%c", d[i]);
		printf("\n");
	}
	return 0;
}

