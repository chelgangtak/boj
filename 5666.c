#include <stdio.h>

float Round(float x) {
	if ((int)(x*1000)%10>=5) return ((int)(x*100)+1)/100.0;
	else return (int)(x*100)/100.0;
}

int main(void) {
	float H, P;
	while(1) {
		if (scanf("%f %f", &H, &P)==EOF) return 0;
		printf("%.2f\n", Round(H/P));
	}
}
