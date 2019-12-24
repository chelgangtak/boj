#include <stdio.h>
#include <time.h>

int main(void) {
	time_t t;
	struct tm *c;
	t=time(NULL);
	c=localtime(&t);
	printf("%d\n%02d\n%02d\n", c->tm_year+1900, c->tm_mon+1, c->tm_mday);
	return 0;
}
