#include <stdio.h>

int main(void) {
	int p[3], w[3], ans=0;
	float g[3];
	for (int i=0; i<3; i++) {
		scanf("%d %d", &p[i], &w[i]);
		w[i]=w[i]*10;
		p[i]=p[i]*10;
		if (p[i]>=5000) p[i]-=500;
		g[i]=(float)w[i]/p[i];
		if (i==0) ans=0;
		else if (g[i]>g[ans]) ans=i;
	}
	if (ans==0) printf("S\n");
	else if (ans==1) printf("N\n");
	else printf("U\n");
	return 0;
}
