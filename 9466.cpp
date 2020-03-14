#include <iostream>
#include <stack>
using namespace std;

int T, n, s[100001], ans;
bool v[100001];
stack<int> st;

void dfs(int i) {
	int tmp, stop=0;
	if (v[i]==false) {
		v[i]=true;
		st.push(i);
		dfs(s[i]);
	}
	else {
		tmp=0;
		while (!st.empty()) {
			if (stop==0) tmp++;
			if (st.top()==i) stop=1;
			st.pop();
		}
		if (stop==1) ans-=tmp;
	}
}

int main(void) {
	cin >> T;
	for (int t=0; t<T; t++) {
		cin >> n;
		ans=n;
		for (int i=1; i<=n; i++) {
			cin >> s[i];
			v[i]=false;
		}
		for (int i=1; i<=n; i++) {
			if (v[i]==true) continue;
			v[i]=true;
			st.push(i);
			dfs(s[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
