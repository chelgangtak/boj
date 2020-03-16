#include <stdio.h>

typedef struct {
	int left;
	int right;
} Node;

int N, cnt=1, D=0, ans, Min[15]={0,}, Max[15]={0,};
Node A[10001];

void dfs(int i, int d) {
	if (i==-1) return;
	if (d>D) D=d;
	dfs(A[i].left, d+1);
	if (Min[d]==0||cnt<Min[d]) Min[d]=cnt;
	if (Max[d]==0||cnt>Max[d]) Max[d]=cnt;
	cnt++;
	dfs(A[i].right, d+1);
}

int main(void) {
	int v[10001]={0,}, a, b, c, root;
	scanf("%d", &N);
	for (int i=1; i<=N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		A[a].left=b;
		A[a].right=c;
		if (b!=-1) v[b]=1;
		if (c!=-1) v[c]=1;
	}
	for (int i=1; i<=N; i++) {
		if (v[i]==0) {
			root=i;
			break;
		}
	}
	dfs(root, 1);
	for (int i=1; i<=D; i++) {
		if (i==1||Max[i]-Min[i]>Max[ans]-Min[ans]) ans=i; 
	}
	printf("%d %d\n", ans, Max[ans]-Min[ans]+1);
	return 0;
}
