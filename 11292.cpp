#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<pair<string, float>> q;

int main(void) {
	int N;
	while(1) {
		cin >> N;
		if (N==0) return 0;
		for (int i=0; i<N; i++) {
			string name;
			float height;
			cin >> name >> height;
			if (q.empty()||q.front().second<=height) q.push(make_pair(name, height));
			if (q.front().second<height) {
				while (q.front().second!=height) q.pop();
			}
		}
		while (!q.empty()) {
			cout << q.front().first << endl;
			q.pop();
		}
	}
}
