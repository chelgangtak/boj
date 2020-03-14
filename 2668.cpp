#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int N, a[101];
bool v[101]={0,};
stack<int> s;
vector<int> vec;

void dfs(int i) {
	if (v[i]==false) {
		v[i]=true;
		s.push(i);
		dfs(a[i]);
	}
	else {
		int stop=0;
		vector<int> tmp;
		while(!s.empty()) {
			if (stop==0) {
				tmp.push_back(s.top());
			}
			if (s.top()==i) {
				stop=1;
				for (int j=0; j<tmp.size(); j++) vec.push_back(tmp[j]);
			}
			s.pop();
		}
	}
}

int main(void) {
	cin >> N;
	for (int i=1; i<=N; i++) cin >> a[i];
	for (int i=1; i<=N; i++) {
		if (v[i]==true) continue;
		v[i]=true;
		s.push(i);
		dfs(a[i]);
	}
	sort(vec.begin(), vec.end());
	cout << vec.size() << endl;
	for (int i=0; i<vec.size(); i++) cout<< vec[i] << endl;
	return 0;
}
