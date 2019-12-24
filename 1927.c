#include <stdio.h>

int heap[100010], n=0;

void push(int x) {
	int i;
	i=++n;
	while ((i!=1) && (x<heap[i/2])) {
		heap[i]=heap[i/2];
		i/=2;
	}
	heap[i]=x;
}

int pop() {
	int parent, child, item, temp;
	item=heap[1];
	temp=heap[n--];
	parent=1;
	child=2;
	while (child<=n) {
		if (child<n && heap[child]>heap[child+1]) child++;
		if (temp <= heap[child]) break;
		heap[parent]=heap[child];
		parent=child;
		child*=2;
	}
	heap[parent]=temp;
	return item;
}


int main(void) {
	int T, x;
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		scanf("%d", &x);
		if (x!=0) push(x);
		else {
			if (n==0) printf("0\n");
			else {
				printf("%d\n", pop());
			}
		}
	}
	return 0;
}
