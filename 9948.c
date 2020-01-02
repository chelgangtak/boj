#include <stdio.h>
#include <string.h>

int f(int d, char m[15]) {
	if (d==29 && strcmp(m, "February")==0) return -2;
	else if (d==4 && strcmp(m, "August")==0) return 0;
	else if (strcmp(m, "January")==0||strcmp(m, "February")==0||strcmp(m, "March")==0||strcmp(m, "April")==0||strcmp(m, "May")==0||strcmp(m, "June")==0||strcmp(m, "July")==0) return 1;
	else if (strcmp(m, "September")==0||strcmp(m, "October")==0||strcmp(m, "November")==0||strcmp(m, "December")==0) return -1;
	else if (d<4) return 1;
	else return -1;
}

int main(void) {
	int d;
	char m[15];

	while(1) {
		scanf("%d %s", &d, m);
		if (d==0 && m[0]=='#') return 0;
		if (f(d,m)==-1) printf("No\n");
		else if (f(d,m)==0) printf("Happy birthday\n");
		else if (f(d,m)==1) printf("Yes\n");
		else printf("Unlucky\n");
	}
}
