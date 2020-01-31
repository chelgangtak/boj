#include <iostream>
using namespace std;

typedef struct {
	int r, c;
	int s;
	int d;
	int z;
} Shark;

int R, C, M, A[101][101]={{0,},};
Shark shark[10001];

void move() {
	int dir[5][2]={{0,0},{-1,0},{1,0},{0,1},{0,-1}};
	for (int i=1; i<=M; i++) {
		if (shark[i].r==0&&shark[i].c==0) continue;
		A[shark[i].r][shark[i].c]=0;
		int k;
		if (shark[i].d<=2) k=2*(R-1);
		else k=2*(C-1);
		for (int t=0; t<shark[i].s%k; t++) {
			if (shark[i].d==1&&shark[i].r==1) shark[i].d=2;
			else if (shark[i].d==2&&shark[i].r==R) shark[i].d=1;
			else if (shark[i].d==3&&shark[i].c==C) shark[i].d=4;
			else if (shark[i].d==4&&shark[i].c==1) shark[i].d=3;
			shark[i].r+=dir[shark[i].d][0];
			shark[i].c+=dir[shark[i].d][1];
		}
	}
	for (int i=1; i<=M; i++) {
		if (shark[i].r==0&&shark[i].c==0) continue;
		if (A[shark[i].r][shark[i].c]==0) A[shark[i].r][shark[i].c]=i;
		else {
			int prev=A[shark[i].r][shark[i].c];
			if (shark[prev].z>shark[i].z) {
				shark[i].r=0;
				shark[i].c=0;
			}
			else {
				shark[prev].r=0;
				shark[prev].c=0;
				A[shark[i].r][shark[i].c]=i;
			}
		}
	}
}

int main(void) {
	int ans=0;
	cin >> R >> C >> M;
	for (int i=1; i<=M; i++) {
		cin >> shark[i].r >> shark[i].c >> shark[i].s >> shark[i].d >> shark[i].z;
		A[shark[i].r][shark[i].c]=i;
	}
	for (int j=1; j<=C; j++) {
		int i=1;
		while (i<=R&&A[i][j]==0) i++;
		if (i<=R) {
			ans+=shark[A[i][j]].z;
			shark[A[i][j]].r=0;
			shark[A[i][j]].c=0;
			A[i][j]=0;
		}
		move();
	}
	cout << ans << endl;
	return 0;
}
