#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef struct {
	int a, b, c;
} Element;

int A, B, C;
queue<Element> q;
vector<int> vec;
bool v[201][201][201]={{{0,},},};

void pour(int x, int y, int Y, int z, int *tx, int *ty, int *tz) {
	*tx=x;
	*ty=y;
	*tz=z;
	*ty+=*tx;
	*tx=0;
	if (*ty>Y) {
		*tx=*ty-Y;
		*ty=Y;
	}
}

void f(int ta, int tb, int tc) {
	if (v[ta][tb][tc]==false) {
		v[ta][tb][tc]=1;
		q.push({ta, tb, tc});
	}
}

void bfs() {
	while (!q.empty()) {
		int a=q.front().a;
		int b=q.front().b;
		int c=q.front().c;
		int ta, tb, tc;
		if (a==0) vec.push_back(c);
		q.pop();
		pour(a, b, B, c, &ta, &tb, &tc);
		f(ta, tb, tc);
		pour(a, c, C, b, &ta, &tc, &tb);
		f(ta, tb, tc);
		pour(b, a, A, c, &tb, &ta, &tc);
		f(ta, tb, tc);
		pour(b, c, C, a, &tb, &tc, &ta);
		f(ta, tb, tc);
		pour(c, a, A, b, &tc, &ta, &tb);
		f(ta, tb, tc);
		pour(c, b, B, a, &tc, &tb, &ta);
		f(ta, tb, tc);
	}
}

int main(void) {
	cin >> A >> B >> C;
	v[0][0][C]=true;
	q.push({0,0,C});
	bfs();
	sort(vec.begin(), vec.end());
	for (int i=0; i<vec.size(); i++) cout << vec[i] << " ";
	cout << endl;
	return 0;
}
