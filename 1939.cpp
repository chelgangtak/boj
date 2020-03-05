#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef struct {
	int isl;
	long lim;
} Element;

int N, M, F1, F2;
vector<Element> a[10001];

int bfs(int w) {
	queue<int> q;
	bool v[10001]={0,};
	v[F1]=true;
	q.push(F1);
	while(!q.empty()) {
		int x=q.front();
		if (x==F2) return 1;
		q.pop();
		for (int i=0; i<a[x].size(); i++) {
			if (v[a[x][i].isl]==true) continue;
			if (w>a[x][i].lim) continue;
			v[a[x][i].isl]=true;
			q.push(a[x][i].isl);
		}
	}
	return 0;
}

int main(void) {
	cin >> N >> M;
	for (int i=0; i<M; i++) {
		int A, B;
		long C;
		cin >> A >> B >> C;
		a[A].push_back({B, C});
		a[B].push_back({A, C});
	}
	cin >> F1 >> F2;
	long tmp=0, Max=0, Min=1, Mid=0;
	for (int i=0; i<a[F1].size(); i++) {
		if (i==0||a[F1][i].lim>tmp) tmp=a[F1][i].lim;
	}
	for (int i=0; i<a[F2].size(); i++) {
		if (i==0||a[F2][i].lim>Max) Max=a[F2][i].lim;
	}
	if (tmp<Max) Max=tmp;
	while(Min<=Max) {
		Mid=Min+(Max-Min)/2;
		if (bfs(Mid)==1) Min=Mid+1;
		else Max=Mid-1;
	}
	cout << Max << endl;
	return 0;
}
