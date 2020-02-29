#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> a[10001];
vector<pair<int, int>> b;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first==b.first) return a.second<b.second;
	return a.first>b.first;
}

int N, M;

int bfs(int x) {
	bool v[10001]={0,};
	int cnt=1;
	queue<int> q;
	v[x]=true;
	q.push(x);
	while(!q.empty()) {
		int x=q.front();
		q.pop();
		for (int i=0; i<a[x].size(); i++) {
			if (v[a[x][i]]==false) {
				v[a[x][i]]=true;
				cnt++;
				q.push(a[x][i]);
			}
		}
	}
	return cnt;
}

int main(void) {
	cin >> N >> M;
	for (int i=0; i<M; i++) {
		int A, B;
		cin >> A >> B;
		a[B].push_back(A);
	}
	for (int i=1; i<=N; i++) b.push_back(make_pair(bfs(i), i));
	sort(b.begin(), b.end(), cmp);
	int max=b[0].first;
	for (int i=0; b[i].first==max; i++) cout << b[i].second << " ";
	cout << endl;
	return 0;
}
