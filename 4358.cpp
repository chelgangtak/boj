#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
vector<string> v;
vector<pair<string, float>> w;

int main(void) {
	string s;
	while(true) {
		getline(cin, s, '\n');
		if (cin.eof()==true) break;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	
	for (int i=0; i<v.size(); i++) {
		if (i==0 || v[i]!=v[i-1]) {
			w.push_back({v[i], 1});
		}
		else w.back().second+=1;
	}

	for (int i=0; i<w.size(); i++) {
		w[i].second=w[i].second/v.size()*100;
		cout << w[i].first << " ";
		printf("%.4f\n", w[i].second);
	}
	return 0;
}
