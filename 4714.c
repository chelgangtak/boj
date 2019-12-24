#include <stdio.h>

int main(void) {
	double w;
	while(1) {
		scanf("%lf", &w);
		if (w<0) return 0;
		printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", w, w*0.167);
	}
}
