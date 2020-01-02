#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main(void) {
	int N, K, v[100001]={0,}, ans=-1, cnt=0;
	cin >> N >> K;
	q.push(N);
	v[N]=1;
	while(!q.empty()) {
		int a=q.front();
		q.pop();
		if (ans!=-1&&v[a]>ans) break;
		if (a==K) {
			ans=v[a];
			cnt++;
			continue;
		}
		if (2*a<=100000&&(v[2*a]==0||v[a]+1<=v[2*a])) {
			v[2*a]=v[a]+1;
			q.push(2*a);
		}
		if (a-1>=0&&(v[a-1]==0||v[a]+1<=v[a-1])) {
			v[a-1]=v[a]+1;
			q.push(a-1);
		}
		if (a+1<=100000&&(v[a+1]==0||v[a]+1<=v[a+1])) {
			v[a+1]=v[a]+1;
			q.push(a+1);
		}
	}
	printf("%d\n%d\n", ans-1, cnt);
	return 0;
}
