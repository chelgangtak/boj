#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;

int n;
pair<int, int> start, End;
vector<pair<int, int>> cvs;

void bfs() {
	queue<pair<int, int>> q;
	bool v[100]={false, };
	q.push(start);
	while(!q.empty()) {
		int x=q.front().first;
		int y=q.front().second;
		//cout << "x; " << x << ", y: " << y;
		int dist=abs(x-End.first)+abs(y-End.second);
		//cout << ", dist: " << dist << endl;
		if (dist<=1000) {
			cout << "happy\n";
			return;
		}
		q.pop();
		for (int i=0; i<cvs.size(); i++) {
			if (v[i]==true) continue;
			int dist=abs(x-cvs[i].first)+abs(y-cvs[i].second);
			if (dist<=1000) {
				v[i]=true;
				q.push(cvs[i]);
			}
		}
	}
	cout << "sad\n";
}

int main(void) {
	int T, x, y;
	cin >> T;
	for (int t=0; t<T; t++) {
		while(!cvs.empty()) cvs.pop_back();
		cin >> n;
		cin >> x >> y;
		start=make_pair(x, y);
		for (int i=0; i<n; i++) {
			cin >> x >> y;
			cvs.push_back(make_pair(x, y));
		}
		cin >> x >> y;
		End=make_pair(x, y);
		bfs();
	}
	return 0;
}
