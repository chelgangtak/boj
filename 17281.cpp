#include <iostream>
using namespace std;

int N, ans=0;
int a[51][10], order[10];

void swap(int *a, int *b) {
	int t=*a;
	*a=*b;
	*b=t;
}

int cal() {
	int out, cur=1, hitter, result, point=0;
	for (int i=1; i<=N; i++) {
		out=0;
		bool base[4]={0,0,0,0};
		while (out<3) {
			hitter=order[cur];
			base[0]=true;
			result=a[i][hitter];
			if (result==0) out++;
			else {
				for (int j=3; j>=0; j--) {
					if (base[j]==false) continue;
					int k=j+result;
					if (k>3) point++;
					else base[k]=true;
					base[j]=false;
				}
			}
			if (cur<9) cur++;
			else cur=1;
		}
	}
	return point;
}

void permutation(int start, int end) {
	if (start==end) {
		if (order[4]!=1) return;
		int tmp=cal();
		if (tmp>ans) ans=tmp;
		return;
	}
	for (int i=start; i<=end; i++) {
		swap(&order[start], &order[i]);
		permutation(start+1, end);
		swap(&order[start], &order[i]);
	}
}

int main(void) {
	cin >> N;
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=9; j++) cin >> a[i][j];
	}
	for (int i=1; i<=9; i++) order[i]=i;
	permutation(1, 9);
	cout << ans << endl;
	return 0;
}
