#include <iostream>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;


typedef struct {
	char c;
	int n;
} Ticket;

Ticket tickets[500];
queue<Ticket> q;
stack<Ticket> s;

int cmp(const void* a, const void *b) {
	Ticket *pa, *pb;
	pa=(Ticket*)a;
	pb=(Ticket*)b;
	if (pa->c < pb->c) return -1;
	else if (pa->c > pb->c) return 1;
	else {
		if (pa->n < pb->n) return -1;
		else if (pa->n > pb->n) return 1;
		else return 0;
	}
}

int isSame(Ticket a, Ticket b) {
	if (a.c==b.c && a.n==b.n) return 1;
	else return -1;
}

int main(void) {
	int N, n=0;
	char tmp[10], tmp2[10];
	cin >> N;
	for (int i=0; i<N; i++) {
		for (int j=0; j<5; j++) {
			scanf("%s", tmp);
			tickets[n].c=tmp[0];
			strcpy(tmp2, tmp+2);
			tickets[n].n=atoi(tmp2);
			Ticket a;
			a.c=tickets[n].c;
			a.n=tickets[n].n;
			q.push(a);
			n++;
		}
	}
	
	qsort(tickets, n, sizeof(Ticket), cmp);
	for (int i=0; i<n; i++) {
		//cout<< tickets[i].c << "-" << tickets[i].n << " 차례" << endl;
		if (!s.empty() && isSame(s.top(), tickets[i])==1) {
			//cout << s.top().c << "-" << s.top().n << ", 스택에서 제거" << endl;
			s.pop();
			continue;
		}
		while (!q.empty() && isSame(q.front(), tickets[i])==-1) {
			s.push(q.front());
			//cout << q.front().c << "-" << q.front().n << ", 큐에서 스택으로 이동" << endl;
			q.pop();
		}
		if(q.empty()) {
			cout << "BAD" << endl;
			return 0;
		}
		else {
			//cout << q.front().c << "-" << q.front().n << " 찾음, 큐에서 제거" << endl;
			q.pop();
		}
	}
	cout << "GOOD" << endl;
	/*for (int i=0; i<n; i++) {
		printf("c: %c, n: %d\n", tickets[i].c, tickets[i].n);
	}
	while (!q.empty()) {
		cout << q.front().c << " " << q.front().n << endl;
		q.pop();
	}*/
	return 0;
}
