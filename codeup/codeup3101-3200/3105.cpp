#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>> l;
void s(int a){
    for(int i=0;i<l.size();i++){
        if(l[i].first==a){
            l[i].second++;
            return;
        }
    }
    l.push_back({a,1});
}
bool c(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}
int main(){
    int n,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&r);
        s(r);
    }
    sort(l.begin(),l.end(),c);
    for(int i=0;i<l.size();i++){
        for(int j=0;j<l[i].second;j++) printf("%d ",l[i].first);
    }
}