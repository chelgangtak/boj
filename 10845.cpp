#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
queue<int> q;

int main(void) {
	int N, x;
	char s[10];

	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> s;
		if (strcmp(s, "push")==0) {
			cin >> x;
			q.push(x);
		}
		else if (strcmp(s, "front")==0) {
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.front());
		}
		else if (strcmp(s, "back")==0) {
			if (q.empty()) printf("-1\n");
			else printf("%d\n", q.back());
		}
		else if (strcmp(s, "size")==0) {
			printf("%d\n", (int)q.size());
		}
		else if (strcmp(s, "empty")==0) {
			if (q.empty()) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(s, "pop")==0) {
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.front());
				q.pop();
			}
		}
	}
	return 0;
}
