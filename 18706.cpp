#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef struct {
	int S;
	int M;
	int L;
} Price;

map<string, Price> coffee;

int main(void) {
	int T, C, P;
	cin >> T;
	for (int t=0; t<T; t++) {
		cin >> C >> P;
		for (int i=0; i<C; i++) {
			string name;
			int s, m, l;
			cin >> name >> s >> m >> l;
			coffee[name]={s, m, l};
		}
		for (int i=0; i<P; i++) {
			string pname, size, cname;
			cin >> pname >> size >> cname;
			int total=100/P;
			if (size=="small") total+=coffee[cname].S;
			else if (size=="medium") total+=coffee[cname].M;
			else total+=coffee[cname].L;
			if (total%5==1) total--;
			else if (total%5==4) total++;
			cout << pname << " " << total << endl;
		}
	}
}
