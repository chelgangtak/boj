#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	int S, K, N=1;
	char C1, C2;
	deque<int> d;

	cin >> S;
	getchar();
	for (int s=0; s<S; s++) {
		scanf("%c %c", &C1, &C2);
		if (C1=='D') scanf(" %d", &K);
		getchar();
		if (C1=='A'&&C2=='L') d.push_front(N++);
		else if (C1=='A'&&C2=='R') d.push_back(N++);
		else if (C1=='D'&&C2=='L') {
			for (int i=0; i<K; i++) d.pop_front();
		}
		else {
			for (int i=0; i<K; i++) d.pop_back();
		}
	}
	while (!d.empty()) {
		printf("%d\n", d.front());
		d.pop_front();
	}
	return 0;
}
