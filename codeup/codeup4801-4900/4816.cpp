#include<iostream>
#include<utility>
using namespace std;
int main() {
	int T;
	pair<int, int> p[3] = { {300,0},{60,0},{10,0} };
	scanf("%d", &T);
	for (int i = 0; i < 3; i++) {
		p[i].second = T / p[i].first;
		T -= p[i].first * p[i].second;
	}
	if (T != 0) printf("-1");
	else {
		for (int i = 0; i < 3; i++) printf("%d ", p[i].second);
	}
}
