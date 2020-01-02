#include <iostream>
#include <queue>
using namespace std;

bool isPrime(int n) {
	for (int i=2; i*i<=n; i++) {
		if (n%i==0) return false;
	}
	return true;
}

int main(void) {
	int T, start, end, suc;
	cin >> T;
	for (int t=0; t<T; t++) {
		int v[10000]={0,};
		suc=0;
		queue<int> q;
		cin >> start >> end;
		v[start]=1;
		q.push(start);
		while(!q.empty()) {
			int a=q.front();
			q.pop();
			if (a==end) {
				suc=1;
				cout << v[a]-1 << endl;
				break;
			}
			for (int i=0; i<10; i++) {
				int b=a/10*10+i;
				if (v[b]>0||isPrime(b)==false) continue;	
				v[b]=v[a]+1;
				q.push(b);
			}
			for (int i=0; i<10; i++) {
				int b=a/100*100+10*i+a%10;
				if (v[b]>0||isPrime(b)==false) continue;
				v[b]=v[a]+1;
				q.push(b);
			}
			for (int i=0; i<10; i++) {
				int b=a/1000*1000+100*i+a%100;
				if (v[b]>0||isPrime(b)==false) continue;
				v[b]=v[a]+1;
				q.push(b);
			}
			for (int i=1; i<10; i++) {
				int b=1000*i+a%1000;
				if (v[b]>0||isPrime(b)==false) continue;
				v[b]=v[a]+1;
				q.push(b);
			}
		}
		if (suc==0) cout << "impossible" << endl;
	}
	return 0;
}
