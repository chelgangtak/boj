#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int n, m, M, first=0, Max;
char s[20];
bool v[9];
queue<int> num;
queue<char> sym;

void f(int n) {
	int i=m-1;
	while(n>0) {
		v[i]=n%2;
		n=n/2;
		i--;
	}
}

int cal(int a, char op, int b) {
	switch(op) {
		case '+': return a+b;
		case '-': return a-b;
		default: return a*b;
	}
}

int main(void) {
	cin >> n;
	cin >> s;
	m=n/2;
	M=(int)pow(2, m);
	for (int i=0; i<M; i++) {
		int fail=0;
		f(i);
		for (int j=0; j<m-1; j++) {
			if (v[j]==true&&v[j+1]==true) {
				fail=1;
				break;
			}
		}
		if (fail==1) continue;
		//for (int j=0; j<m; j++) printf("%d", v[j]);
		//printf("\n");
		for (int j=0; j<n; j++) {
			if (j%2==0) {
				if (j<n-1&&v[(j+1)/2]==1) continue;
				if (j>0&&v[(j-1)/2]==1) continue;
				num.push(s[j]-'0');
			}
			else {
				if (v[j/2]==1) {
					int r=cal(s[j-1]-'0', s[j], s[j+1]-'0');
					num.push(r);
				}
				else sym.push(s[j]);
			}
		}
		int r=num.front();
		num.pop();
		while(!sym.empty()) {
			//printf("%d %c %d = ", r, sym.front(), num.front());
			r=cal(r, sym.front(), num.front());
			//printf("%d\n", r);
			sym.pop();
			num.pop();
		}
		if (first==0) {
			Max=r;
			first=1;
		}
		else if (r>Max) Max=r;
	}
	printf("%d\n", Max);
	return 0;
}
