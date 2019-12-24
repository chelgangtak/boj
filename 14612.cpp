#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second==b.second) {
		return a.first < b.first;
	}
	else return a.second < b.second;
}

int main(void) {
	int N, M, t, o;
	string s;
	cin >> N >> M;
	vector<pair<int, int>>::iterator it;
	
	for (int i=0; i<N; i++) {
		cin >> s;
		if (s=="order") {
			cin >> t >> o;
			v.push_back({t, o});
		}
		else if (s=="sort") {
			sort(v.begin(), v.end(), compare);
		}
		else {
			cin >> t;
			for (it=v.begin(); it<v.end(); it++) {
				if ((*it).first==t) v.erase(it);
			}
		}
		if (v.empty()) {
			cout << "sleep" << endl;
		}
		else {
			for (it=v.begin(); it!=v.end(); it++) cout << (*it).first << " ";
			cout << endl;
		}
	}

}
