#include<iostream>
#include<utility>
using namespace std;
int main() {
	int n, k, w, g, s=0;
	pair<int, int> l[6] = { {0,0}, };
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &w, &g);
		if (w == 0) {
			l[g - 1].first++;
		}
		else {
			l[g - 1].second++;
		}
	}
	for (int i = 0; i < 6; i++) {
		s+=(l[i].first + k - 1) / k + (l[i].second + k - 1) / k;
	}
	printf("%d", s);
}
