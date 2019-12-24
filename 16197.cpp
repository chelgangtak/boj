#include <iostream>
#include <queue>
using namespace std;

typedef struct _node {
	int r1, r2;
	int c1, c2;
	int cnt;
} node;

int N, M;
char board[20][20];

queue<node> q;

int main(void) {
	int first=0, fall1=0, fall2=0;
	int d[4][2]={{-1,0}, {0,1}, {1,0}, {0,-1}};
	node coin;

	cin >> N >> M;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> board[i][j];
			if (board[i][j]=='o') {
				if (first==0) {
					first=1;
					coin.r1=i;
					coin.c1=j;
					coin.cnt=0;
				}
				else {
					coin.r2=i;
					coin.c2=j;
				}
			}
		}
	}
	q.push(coin);

	while (true) {
		node a=q.front();
		q.pop();
		int row1=a.r1;
		int col1=a.c1;
		int row2=a.r2;
		int col2=a.c2;
		int count=a.cnt;
		//printf("row1: %d, col1: %d, row2: %d, col2: %d, count: %d\n", row1, col1, row2, col2, count);
		if (count>10) {
			cout << "-1" << endl;
			return 0;
		}
		for (int i=0; i<4; i++) {
			int nrow1=row1+d[i][0];
			int ncol1=col1+d[i][1];
			//printf("nrow1: %d, ncol1: %d\n", nrow1, ncol1);
			if (nrow1<0 || nrow1>N-1 || ncol1<0 || ncol1>M-1) fall1=1;
			int nrow2=row2+d[i][0];
			int ncol2=col2+d[i][1];
			//printf("nrow2: %d, ncol2: %d\n", nrow2, ncol2);
			if (nrow2<0 || nrow2>N-1 || ncol2<0 || ncol2>M-1) fall2=1;
			if (fall1==1 && fall2==1) {
				fall1=0;
				fall2=0;
				//printf("%d, all fall\n", i);
				continue;
			}
			else if (fall1==0 && fall2==0) {
				if (board[nrow1][ncol1]=='#') {
					nrow1=row1;
					ncol1=col1;
				}
				if (board[nrow2][ncol2]=='#') {
					nrow2=row2;
					ncol2=col2;
				}
				if (nrow1==row1 && ncol1==col1 && nrow2==row2 && ncol2==col2) {
					//printf("%d, all wall\n", i);
					continue;
				}
				else {
					//printf("%d, (%d,%d) move, (%d,%d) move\n", i, nrow1, ncol1, nrow2, ncol2);
					q.push({nrow1, nrow2, ncol1, ncol2, count+1});
				}
			}
			else {
				//printf("dir: %d, success!\n", i);
				if (count+1>10) cout << "-1" << endl;
				else cout << count+1 << endl;
				return 0;
			}
		}
	}
}
