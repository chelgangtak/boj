#include <iostream>
#include <cstdlib>
using namespace std;

int N, M, D, ans=0, tot=0, cnt, kill;
bool a[15][15], b[15][15];
typedef pair<int, int> Point;

Point f(int r, int c) {
	//printf("r: %d, c: %d\n", r, c);
	int tr=-1, tc=-1;
	for (int d=0; d<D; d++) {
		for (int j=-d; j<=d; j++) {
			int i=d-abs(j);
			//printf("i: %d, j: %d\n", i, j);
			if (r-i<0) continue;
			if (c+j<0||c+j>=M) continue;
			if (b[r-i][c+j]==true) {
				tr=r-i;
				tc=c+j;
				return make_pair(tr, tc);
			}
		}
	}
	return make_pair(tr, tc);
}

void f2(int tr, int tc) {
	if (tr!=-1&&b[tr][tc]==true) {
		//printf("tr: %d, tc: %d\n", tr, tc);
		b[tr][tc]=false;
		kill++;
		cnt++;
	}
}

void g() {
	for (int j=0; j<M; j++) {
		for (int i=N-1; i>=0; i--) {
			if (i==N-1) {
				if (b[i][j]==true) cnt++;
			}
			else {
				b[i+1][j]=b[i][j];
				if (i==0) b[i][j]=0;
			}
		}
	}
	//printf("cnt: %d\n", cnt);
}

int main(void) {
	cin >> N >> M >> D;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> a[i][j];
			if (a[i][j]==true) tot++;
		}
	}
	for (int x=0; x<M; x++) {
		for (int y=x+1; y<M; y++) {
			for (int z=y+1; z<M; z++) {
				cnt=0;
				kill=0;
				//printf("%d %d %d\n", x, y, z);
				for (int i=0; i<N; i++) {
					for (int j=0; j<M; j++) b[i][j]=a[i][j];
				}
				while (cnt<tot) {
					Point t1=f(N-1, x);
					Point t2=f(N-1, y);
					Point t3=f(N-1, z);
					f2(t1.first, t1.second);
					f2(t2.first, t2.second);
					f2(t3.first, t3.second);
					g();
					//printf("cnt: %d, kill: %d, tot: %d\n", cnt, kill, tot);
				}
				if (kill>ans) ans=kill;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
