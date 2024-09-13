#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int main() {
    vector<pair<int,int>> vec;
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        vec.push_back(make_pair(num, i));
    }
    
    sort(vec.begin(), vec.end());
    
    vector<int> result(N);
    
    for (int i = 0; i < N; i++) {
        result[vec[i].second] = i;
    }
    
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}