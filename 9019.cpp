#include <iostream>
#include <string>
#include <utility>
#include <queue>
using namespace std;

int T, A, B;
string ans;

int Double(int n) {
	return (2*n)%10000;
}

int Substract(int n) {
	if (n>0) return n-1;
	else return 9999;
}

int Left(int n) {
	return n%1000*10+n/1000;
}

int Right(int n) {
	return n%10*1000+n/10;
}

void bfs() {
	queue<pair<int, string>> q;
	bool v[10000]={false,};
	v[A]=true;
	q.push(make_pair(A, ""));
	while(!q.empty()) {
		int n=q.front().first;
		string str=q.front().second;
		if (n==B) {
			ans=str;
			return;
		}
		q.pop();
		int d=Double(n);
		if (v[d]==false) {
			v[d]=true;
			q.push(make_pair(d, str+"D"));
		}
		int s=Substract(n);
		if (v[s]==false) {
			v[s]=true;
			q.push(make_pair(s, str+"S"));
		}
		int l=Left(n);
		if (v[l]==false) {
			v[l]=true;
			q.push(make_pair(l, str+"L"));
		}
		int r=Right(n);
		if (v[r]==false) {
			v[r]=true;
			q.push(make_pair(r, str+"R"));
		}
	}
}

int main(void) {
	cin >> T;
	for (int t=0; t<T; t++) {
		cin >> A >> B;
		bfs();
		cout << ans << endl;
	}
	return 0;
}
