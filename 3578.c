#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	int score;
	int cnt;
	int time;
} Team;

Team team[100];

int cmp(const void *a, const void *b) {
	Team *pa=(Team*)a, *pb=(Team*)b;
	if (pa->score > pb->score) return -1;
	else if (pa->score < pb->score) return 1;
	else {
		if (pa->cnt < pb->cnt) return -1;
		else if (pa->cnt > pb->cnt) return 1;
		else {
			if (pa->time < pb->time) return -1;
			else if (pa->time > pb->time) return 1;
			else return 0;
		}
	}
}

int main(void) {
	int T, n, k, t, m, i, j, s;
	scanf("%d", &T);
	for (int tt=0; tt<T; tt++) {
		scanf("%d %d %d %d", &n, &k, &t, &m);
		int p[101][101];
		for (int i=0; i<n; i++) {
			team[i].id=i+1;
			team[i].score=0;
			team[i].cnt=0;
			for (int j=0; j<k; j++) p[i+1][j+1]=-1;
		}
		for (int x=0; x<m; x++) {
			scanf("%d %d %d", &i, &j, &s);
			team[i-1].cnt++;
			team[i-1].time=x;
			if (p[i][j]==-1) {
				p[i][j]=s;
				team[i-1].score+=s;
			}
			else if (s>p[i][j]) {
				team[i-1].score-=p[i][j];
				team[i-1].score+=s;
				p[i][j]=s;
			}
		}
		qsort(team, n, sizeof(Team), cmp);
		for (int i=0; i<n; i++) {
			//printf("%d: %d, %d, %d\n", team[i].id, team[i].score, team[i].cnt, team[i].time);
			if (team[i].id==t) {
				printf("%d\n", i+1);
				break;
			}
		}
	}
	return 0;
}
