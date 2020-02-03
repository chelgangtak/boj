#include <stdio.h>
#include <string.h>

int main(void) {
	int N, len1, len2, v1[26]={0,}, cnt=0;
	char s1[11], s2[11];
	scanf("%d", &N);
	scanf("%s", s1);
	len1=strlen(s1);
	for (int i=0; i<len1; i++) v1[s1[i]-'A']++;
	for (int t=0; t<N-1; t++) {
		scanf("%s", s2);
		int v2[26]={0,}, fail;
		len2=strlen(s2);
		for (int i=0; i<len2; i++) v2[s2[i]-'A']++;
		if (len1==len2+1) {
			fail=0;
			for (int i=0; i<26; i++) {
				if (v1[i]==0&&v2[i]==0) continue;
				int diff=v1[i]-v2[i];
				if (diff!=1&&diff!=0) {
					fail=1;
					break;
				}
			}
			if (fail==0) cnt++;
		}
		else if (len1+1==len2) {
			fail=0;
			for (int i=0; i<26; i++) {
				if (v1[i]==0&&v2[i]==0) continue;
				int diff=v2[i]-v1[i];
				if (diff!=1&&diff!=0) {
					fail=1;
					break;
				}
			}
			if (fail==0) cnt++;
		}
		else {
			fail=1;
			int plus=0, minus=0;
			for (int i=0; i<26; i++) {
				if (v1[i]==0&&v2[i]==0) continue;
				int diff=v1[i]-v2[i];
				if (diff==0) continue;
				else if (diff==1) plus++;
				else if (diff==-1) minus++;
				else {
					plus=-1;
					minus-1;
					break;
				}
			}
			if ((plus==1&&minus==1)||(plus==0&&minus==0)) fail=0;
			if (fail==0) cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
