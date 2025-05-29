#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int f(int a, int b) {
	return (a > b) ? a - b : b - a;
}
int main() {
	int n,x,y,t;
  long long int s=0;
	vector<pair<int, vector<int>>> v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		t = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].first == y) {
				v[i].second.push_back(x);
				t = 1;
			}
		}
		if (t == 0) {
			v.push_back(make_pair(y, vector<int>{x}));
		}
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].second.size(); j++) {
			int l = 1000000001;
			if (v[i].second.size() == 1) break;
			for (int k = 0; k < v[i].second.size(); k++) {
				if (k != j && f(v[i].second[k], v[i].second[j]) < l) l = f(v[i].second[k], v[i].second[j]);
			}
			s += l;
		}
	}
	printf("%lld", s);
}
