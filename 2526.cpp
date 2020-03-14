#include <iostream>
#include <stack>
using namespace std;

int N, P, ans=0;
bool v[100]={0,};
stack<int> s;

void dfs(int n) {
	if (v[n]==false) {
		v[n]=true;
		s.push(n);
		dfs(n*N%P);
	}
	else {
		int stop=0;
		while(!s.empty()) {
			ans++;
			if (s.top()==n) return;
			s.pop();
		}
	}
}

int main(void) {
	cin >> N >> P;
	dfs(N);
	cout << ans << endl;
}
