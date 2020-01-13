#include <iostream>
#include <utility>
#include <stack>
#include <queue>
using namespace std;

int a[101][101]={{0,},};
stack<pair<int, int>> st, tmp;
queue<pair<int, int>> q;

void f() {
	int x=st.top().first;
	int y=st.top().second;
	tmp.push(make_pair(x,y));
	st.pop();
	while (!st.empty()) {
		int X=st.top().first;
		int Y=st.top().second;
		tmp.push(make_pair(X,Y));
		st.pop();
		X-=x;
		Y-=y;
		int t=X;
		X=-Y;
		Y=t;
		X+=x;
		Y+=y;
		q.push(make_pair(X,Y));
	}
	while(!tmp.empty()) {
		int X=tmp.top().first;
		int Y=tmp.top().second;
		st.push(make_pair(X,Y));
		tmp.pop();
	}
	while(!q.empty()) {
		int X=q.front().first;
		int Y=q.front().second;
		st.push(make_pair(X,Y));
		q.pop();
	}
}

int main(void) {
	int N, x, y, d, g, dir[4][2]={{1,0},{0,-1},{-1,0},{0,1}}, cnt=0;
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> x >> y >> d >> g;
		st.push(make_pair(x, y));
		st.push(make_pair(x+dir[d][0], y+dir[d][1]));
		for (int j=0; j<g; j++) f();
		while(!st.empty()) {
			a[st.top().first][st.top().second]=1;
			st.pop();
		}
	}
	for (int i=0; i<100; i++) {
		for (int j=0; j<100; j++) {
			if (a[i][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i+1][j+1]==1) cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
