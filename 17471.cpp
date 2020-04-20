#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

int N, pop[11], a[11], total=0, cnt, sum, ans=10000;
vector<int> adj[11];
bool v[11];
queue<int> q;

void bfs() {
	while(!q.empty()) {
		int x=q.front();
		q.pop();
		for (int i=0; i<adj[x].size(); i++) {
			int y=adj[x][i];
			if (a[y]!=a[x]||v[y]==true) continue;
			v[y]=true;
			sum+=pop[y];
			q.push(y);
		}
	}
}

int main(void) {
	cin >> N;
	for (int i=1; i<=N; i++) {
		cin >> pop[i];
		total=total+pop[i];
	}
	for (int i=1; i<=N; i++) {
		int n, d;
		cin >> n;
		for (int j=1; j<=n; j++) {
			cin >> d;
			adj[i].push_back(d);
		}
	}
	int m=(int)pow(2, N-1);
	for (int i=0; i<m; i++) {
		int t=i;
		for (int j=1; j<=N; j++) {
			a[j]=t%2;
			t/=2;
			v[j]=false;
		}
		cnt=0;
		for (int j=1; j<=N; j++) {
			if (v[j]==true) continue;
			v[j]=true;
			sum=pop[j];
			q.push(j);
			bfs();
			cnt++;
		}
		if (cnt!=2) continue;
		int diff=abs(sum-(total-sum));
		if (diff<ans) ans=diff;
	}
	if (ans==10000) cout << "-1" << endl;
	else cout << ans << endl;
	return 0;
}
