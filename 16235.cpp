#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, K;
int A[11][11], B[11][11];
vector<int> age[11][11];

int main(void) {
	int x, y, z, ans=0;
	cin >> N >> M >> K;
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			cin >> B[i][j];
			A[i][j]=5;
		}
	}
	for (int i=1; i<=M; i++) {
		cin >> x >> y >> z;
		age[x][y].push_back(z);
	}
	for (int i=1; i<=K; i++) {
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				if (age[i][j].size()==0) continue;
				sort(age[i][j].begin(), age[i][j].end());
				int cnt=0, sum=0;
				for (vector<int>::iterator it=age[i][j].begin(); it!=age[i][j].end(); ++it) {
					if (A[i][j]<(*it)) {
						sum+=(*it)/2;
						cnt++;
					}
					else {
						A[i][j]-=(*it);
						(*it)++;
					}
				}
				for (int p=0; p<cnt; p++) age[i][j].pop_back();
				A[i][j]+=sum;
			}
		}
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				if (age[i][j].size()==0) continue;
				for (vector<int>::iterator it=age[i][j].begin(); it!=age[i][j].end(); ++it) {
					if ((*it)%5==0) {
						for (int x=-1; x<=1; x++) {
							for (int y=-1; y<=1; y++) {
								if (x==0&&y==0) continue;
								if (i+x<1||i+x>N) continue;
								if (j+y<1||j+y>N) continue;
								age[i+x][j+y].push_back(1);
							}
						}
					}
				}				
			}
		}
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) A[i][j]+=B[i][j];
		}
	}
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			if (age[i][j].size()>0) ans+=age[i][j].size();
		}
	}
	cout << ans << endl;
	return 0;
}
