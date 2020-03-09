#include <iostream>
#include <queue>
using namespace std;

int A, B, N, M, a;
queue<int> q;
int v[100001]={0,};

void f(int b) {
	if (b<0||b>100000||v[b]!=0) return;
	v[b]=v[a]+1;
	q.push(b);
}

int bfs() {
	while (!q.empty()) {
		a=q.front();
		q.pop();
		if (a==M) return v[a]-1;
		f(a+1);
		f(a-1);
		f(a+A);
		f(a-A);
		f(a+B);
		f(a-B);
		f(a*A);
		f(a*B);
	}
}

int main(void) {
	cin >> A >> B >> N >> M;
	v[N]=1;
	q.push(N);
	cout << bfs() << endl;
	return 0;
}
