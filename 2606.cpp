#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[101];
queue<int> q;
int c[101]={0,};

int main(void) {
	int n, e, v1, v2, ans=0;
	cin >> n;
	cin >> e;
	for (int i=0; i<e; i++) {
		cin >> v1 >> v2;
		v[v1].push_back(v2);
		v[v2].push_back(v1);
	}
	c[1]=1;
	q.push(1);
	while (!q.empty()) {
		int a=q.front();
		q.pop();
		for (int i=0; i<v[a].size(); i++) {
			if (c[v[a][i]]==0) {
				c[v[a][i]]=1;
				q.push(v[a][i]);
			}
		}
	}
	for (int i=1; i<=n; i++) {
		if (c[i]==1) ans++;
	}
	cout << ans-1 << endl;
	return 0;
}
