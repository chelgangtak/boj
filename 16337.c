#include <stdio.h>

char die[3][3];
int one() {
	if (die[1][1]=='o') return 1;
	else return 0;
}

int two1() {
	if (die[0][0]=='o'&&die[2][2]=='o') return 1;
	else return 0;
}

int two2() {
	if (die[0][2]=='o'&&die[2][0]=='o') return 1;
	else return 0;
}

int three() {
	if ((two1()||two2())&&one()) return 1;
	else return 0;
}

int four() {
	if (two1()&&two2()) return 1;
	else return 0;
}

int five() {
	if (one()&&four()) return 1;
	else return 0;
}

int six() {
	if (four()) {
		if (die[0][1]=='o'&&die[2][1]=='o') return 1;
		else if (die[1][0]=='o'&&die[1][2]=='o') return 1;
	}
	return 0;
}

int main(void) {
	int cnt=0, suc=0;
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			scanf("%c", &die[i][j]);
			if (die[i][j]=='o') cnt++;
		}
		getchar();
	}
	switch(cnt) {
		case 1:
			if (one()) suc=1;
			break;
		case 2:
			if (two1()||two2()) suc=1;
			break;
		case 3:
			if (three()) suc=1;
			break;
		case 4:
			if (four()) suc=1;
			break;
		case 5:
			if (five()) suc=1;
			break;
		case 6:
			if (six()) suc=1;
			break;	
	}
	if (suc==1) printf("%d\n", cnt);
	else printf("unknown\n");
	return 0;
}
