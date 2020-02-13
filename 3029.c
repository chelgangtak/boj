#include <stdio.h>

int main(void) {
	int h, m, s, s1, s2;
	scanf("%d:%d:%d", &h, &m, &s);
	s1=h*3600+m*60+s;
	scanf("%d:%d:%d", &h, &m, &s);
	s2=h*3600+m*60+s;
	if (s2<=s1) s2+=24*3600;
	printf("%02d:%02d:%02d\n", (s2-s1)/3600, (s2-s1)%3600/60, (s2-s1)%60);
	return 0;
}
