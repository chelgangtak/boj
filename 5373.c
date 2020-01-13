#include <stdio.h>

enum face {up, down, front, back, left, right};
char v[8][6], e[12][6];

void rotate(int f, int d) {
	//printf("f: %d, d: %d\n", f, d);
	switch(f) {
		case up:
			if (d==1) {
				char tmp=v[0][left]; v[0][left]=v[2][front]; v[2][front]=v[3][right]; v[3][right]=v[1][back]; v[1][back]=tmp;
				tmp=v[0][back]; v[0][back]=v[2][left]; v[2][left]=v[3][front]; v[3][front]=v[1][right]; v[1][right]=tmp;
				tmp=e[0][back]; e[0][back]=e[1][left]; e[1][left]=e[3][front]; e[3][front]=e[2][right]; e[2][right]=tmp;
				tmp=v[0][up]; v[0][up]=v[2][up]; v[2][up]=v[3][up]; v[3][up]=v[1][up]; v[1][up]=tmp;
				tmp=e[0][up]; e[0][up]=e[1][up]; e[1][up]=e[3][up]; e[3][up]=e[2][up]; e[2][up]=tmp;
			}
			else {
				char tmp=v[0][left]; v[0][left]=v[1][back]; v[1][back]=v[3][right]; v[3][right]=v[2][front]; v[2][front]=tmp;
				tmp=v[0][back]; v[0][back]=v[1][right]; v[1][right]=v[3][front]; v[3][front]=v[2][left]; v[2][left]=tmp;
				tmp=e[0][back]; e[0][back]=e[2][right]; e[2][right]=e[3][front]; e[3][front]=e[1][left]; e[1][left]=tmp;
				tmp=v[0][up]; v[0][up]=v[1][up]; v[1][up]=v[3][up]; v[3][up]=v[2][up]; v[2][up]=tmp;
				tmp=e[0][up]; e[0][up]=e[2][up]; e[2][up]=e[3][up]; e[3][up]=e[1][up]; e[1][up]=tmp;
			}
			break;
		case down:
			if (d==-1) {
				char tmp=v[4][left]; v[4][left]=v[6][front]; v[6][front]=v[7][right]; v[7][right]=v[5][back]; v[5][back]=tmp;
				tmp=v[4][back]; v[4][back]=v[6][left]; v[6][left]=v[7][front]; v[7][front]=v[5][right]; v[5][right]=tmp;
				tmp=e[8][back]; e[8][back]=e[9][left]; e[9][left]=e[11][front]; e[11][front]=e[10][right]; e[10][right]=tmp;
				tmp=v[4][down]; v[4][down]=v[6][down]; v[6][down]=v[7][down]; v[7][down]=v[5][down]; v[5][down]=tmp;
				tmp=e[8][down]; e[8][down]=e[9][down]; e[9][down]=e[11][down]; e[11][down]=e[10][down]; e[10][down]=tmp;
			}
			else {
				char tmp=v[4][left]; v[4][left]=v[5][back]; v[5][back]=v[7][right]; v[7][right]=v[6][front]; v[6][front]=tmp;
				tmp=v[4][back]; v[4][back]=v[5][right]; v[5][right]=v[7][front]; v[7][front]=v[6][left]; v[6][left]=tmp;
				tmp=e[8][back]; e[8][back]=e[10][right]; e[10][right]=e[11][front]; e[11][front]=e[9][left]; e[9][left]=tmp;
				tmp=v[4][down]; v[4][down]=v[5][down]; v[5][down]=v[7][down]; v[7][down]=v[6][down]; v[6][down]=tmp;
				tmp=e[8][down]; e[8][down]=e[10][down]; e[10][down]=e[11][down]; e[11][down]=e[9][down]; e[9][down]=tmp;
			}
			break;
		case front:
			if (d==1) {
				char tmp=v[2][left]; v[2][left]=v[6][down]; v[6][down]=v[7][right]; v[7][right]=v[3][up]; v[3][up]=tmp;
				tmp=v[2][up]; v[2][up]=v[6][left]; v[6][left]=v[7][down]; v[7][down]=v[3][right]; v[3][right]=tmp;
				tmp=e[3][up]; e[3][up]=e[6][left]; e[6][left]=e[11][down]; e[11][down]=e[7][right]; e[7][right]=tmp;
				tmp=v[2][front]; v[2][front]=v[6][front]; v[6][front]=v[7][front]; v[7][front]=v[3][front]; v[3][front]=tmp;
				tmp=e[3][front]; e[3][front]=e[6][front]; e[6][front]=e[11][front]; e[11][front]=e[7][front]; e[7][front]=tmp;
			}
			else {
				char tmp=v[2][left]; v[2][left]=v[3][up]; v[3][up]=v[7][right]; v[7][right]=v[6][down]; v[6][down]=tmp;
				tmp=v[2][up]; v[2][up]=v[3][right]; v[3][right]=v[7][down]; v[7][down]=v[6][left]; v[6][left]=tmp;
				tmp=e[3][up]; e[3][up]=e[7][right]; e[7][right]=e[11][down]; e[11][down]=e[6][left]; e[6][left]=tmp;
				tmp=v[2][front]; v[2][front]=v[3][front]; v[3][front]=v[7][front]; v[7][front]=v[6][front]; v[6][front]=tmp;
				tmp=e[3][front]; e[3][front]=e[7][front]; e[7][front]=e[11][front]; e[11][front]=e[6][front]; e[6][front]=tmp;
			}
			break;
		case back:
			if (d==-1) {
				char tmp=v[0][left]; v[0][left]=v[4][down]; v[4][down]=v[5][right]; v[5][right]=v[1][up]; v[1][up]=tmp;
				tmp=v[0][up]; v[0][up]=v[4][left]; v[4][left]=v[5][down]; v[5][down]=v[1][right]; v[1][right]=tmp;
				tmp=e[0][up]; e[0][up]=e[4][left]; e[4][left]=e[8][down]; e[8][down]=e[5][right]; e[5][right]=tmp;
				tmp=v[0][back]; v[0][back]=v[4][back]; v[4][back]=v[5][back]; v[5][back]=v[1][back]; v[1][back]=tmp;
				tmp=e[0][back]; e[0][back]=e[4][back]; e[4][back]=e[8][back]; e[8][back]=e[5][back]; e[5][back]=tmp;
			}
			else {
				char tmp=v[0][left]; v[0][left]=v[1][up]; v[1][up]=v[5][right]; v[5][right]=v[4][down]; v[4][down]=tmp;
				tmp=v[0][up]; v[0][up]=v[1][right]; v[1][right]=v[5][down]; v[5][down]=v[4][left]; v[4][left]=tmp;
				tmp=e[0][up]; e[0][up]=e[5][right]; e[5][right]=e[8][down]; e[8][down]=e[4][left]; e[4][left]=tmp;
				tmp=v[0][back]; v[0][back]=v[1][back]; v[1][back]=v[5][back]; v[5][back]=v[4][back]; v[4][back]=tmp;
				tmp=e[0][back]; e[0][back]=e[5][back]; e[5][back]=e[8][back]; e[8][back]=e[4][back]; e[4][back]=tmp;
			}
			break;
		case left:
			if (d==1) {
				char tmp=v[0][up]; v[0][up]=v[4][back]; v[4][back]=v[6][down]; v[6][down]=v[2][front]; v[2][front]=tmp;
				tmp=v[0][back]; v[0][back]=v[4][down]; v[4][down]=v[6][front]; v[6][front]=v[2][up]; v[2][up]=tmp;
				tmp=e[1][up]; e[1][up]=e[4][back]; e[4][back]=e[9][down]; e[9][down]=e[6][front]; e[6][front]=tmp;
				tmp=v[0][left]; v[0][left]=v[4][left]; v[4][left]=v[6][left]; v[6][left]=v[2][left]; v[2][left]=tmp;
				tmp=e[1][left]; e[1][left]=e[4][left]; e[4][left]=e[9][left]; e[9][left]=e[6][left]; e[6][left]=tmp;
			}
			else {
				char tmp=v[0][up]; v[0][up]=v[2][front]; v[2][front]=v[6][down]; v[6][down]=v[4][back]; v[4][back]=tmp;
				tmp=v[0][back]; v[0][back]=v[2][up]; v[2][up]=v[6][front]; v[6][front]=v[4][down]; v[4][down]=tmp;
				tmp=e[1][up]; e[1][up]=e[6][front]; e[6][front]=e[9][down]; e[9][down]=e[4][back]; e[4][back]=tmp;
				tmp=v[0][left]; v[0][left]=v[2][left]; v[2][left]=v[6][left]; v[6][left]=v[4][left]; v[4][left]=tmp;
				tmp=e[1][left]; e[1][left]=e[6][left]; e[6][left]=e[9][left]; e[9][left]=e[4][left]; e[4][left]=tmp;
			}
			break;
		case right:
			if (d==1) {
				char tmp=v[3][up]; v[3][up]=v[7][front]; v[7][front]=v[5][down]; v[5][down]=v[1][back]; v[1][back]=tmp;
				tmp=v[3][front]; v[3][front]=v[7][down]; v[7][down]=v[5][back]; v[5][back]=v[1][up]; v[1][up]=tmp;
				tmp=e[2][up]; e[2][up]=e[7][front]; e[7][front]=e[10][down]; e[10][down]=e[5][back]; e[5][back]=tmp;
				tmp=v[3][right]; v[3][right]=v[7][right]; v[7][right]=v[5][right]; v[5][right]=v[1][right]; v[1][right]=tmp;
				tmp=e[2][right]; e[2][right]=e[7][right]; e[7][right]=e[10][right]; e[10][right]=e[5][right]; e[5][right]=tmp;
			}
			else {
				char tmp=v[3][up]; v[3][up]=v[1][back]; v[1][back]=v[5][down]; v[5][down]=v[7][front]; v[7][front]=tmp;
				tmp=v[3][front]; v[3][front]=v[1][up]; v[1][up]=v[5][back]; v[5][back]=v[7][down]; v[7][down]=tmp;
				tmp=e[2][up]; e[2][up]=e[5][back]; e[5][back]=e[10][down]; e[10][down]=e[7][front]; e[7][front]=tmp;
				tmp=v[3][right]; v[3][right]=v[1][right]; v[1][right]=v[5][right]; v[5][right]=v[7][right]; v[7][right]=tmp;
				tmp=e[2][right]; e[2][right]=e[5][right]; e[5][right]=e[10][right]; e[10][right]=e[7][right]; e[7][right]=tmp;
			}
			break;
	}
}

int main(void) {
	int T, n;
	char s[3];
	scanf("%d", &T);
	for (int t=0; t<T; t++) {
		for (int i=0; i<8; i++) {
			for (int j=up; j<=right; j++) {
				switch(j) {
					case up: v[i][j]='w'; break;
					case down: v[i][j]='y'; break;
					case front: v[i][j]='r'; break;
					case back: v[i][j]='o'; break;
					case left: v[i][j]='g'; break;
					case right: v[i][j]='b'; break;
				}
			}
		}		
		for (int i=0; i<12; i++) {
			for (int j=up; j<=right; j++) {
				switch(j) {
					case up: e[i][j]='w'; break;
					case down: e[i][j]='y'; break;
					case front: e[i][j]='r'; break;
					case back: e[i][j]='o'; break;
					case left: e[i][j]='g'; break;
					case right: e[i][j]='b'; break;
				}
			}	
		}
		scanf("%d", &n);
		for (int i=0; i<n; i++) {
			scanf("%s", s);
			int f, d;
			switch(s[0]) {
				case 'U': f=up; break;
				case 'D': f=down; break;
				case 'F': f=front; break;
				case 'B': f=back; break;
				case 'L': f=left; break;
				case 'R': f=right; break;
			}
			if (s[1]=='+') d=1;
			else d=-1;
			rotate(f, d);
			/*printf("%c%c%c %c%c%c %c%c%c\n", v[0][up], e[0][up], v[1][up], v[0][left], e[1][left], v[2][left], v[2][front], e[3][front], v[3][front]);
			printf("%c%c%c %c%c%c %c%c%c\n", e[1][up], 'w', e[2][up], e[4][left], 'g', e[6][left], e[6][front], 'r', e[7][front]);
			printf("%c%c%c %c%c%c %c%c%c\n", v[2][up], e[3][up], v[3][up], v[4][left], e[9][left], v[6][left], v[6][front], e[11][front], v[7][front]);
			printf("\n");
			printf("%c%c%c %c%c%c %c%c%c\n", v[3][right], e[2][right], v[1][right], v[1][back], e[0][back], v[0][back], v[7][down], e[10][down], v[5][down]);
			printf("%c%c%c %c%c%c %c%c%c\n", e[7][right], 'b', e[5][right], e[5][back], 'o', e[4][back], e[11][down], 'y', e[8][down]);
			printf("%c%c%c %c%c%c %c%c%c\n", v[7][right], e[10][right], v[5][right], v[5][back], e[8][back], v[4][back], v[6][down], e[9][down], v[4][down]);
			printf("\n\n");*/
		}
		printf("%c%c%c\n", v[0][up], e[0][up], v[1][up]);
		printf("%c%c%c\n", e[1][up], 'w', e[2][up]);
		printf("%c%c%c\n", v[2][up], e[3][up], v[3][up]);
	}
	return 0;
}
