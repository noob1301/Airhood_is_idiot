#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(const pair<int,int>a,const pair<int,int>b){
  return a.second>b.second;
}
int main(){
  int n,s=0;
  vector<pair<int,int>> l;
  for(int i=0;i<10;i++){
    scanf("%d",&n);
    s+=n;
    for(int j=0;j<l.size();j++){ 
      if(l[j].first==n){
        l[j].second++;
        continue;
      }
    }
    l.push_back({n,1});
  }
  sort(l.begin(),l.end(),cmp);
  printf("%d %d",s/10,l[0].first);
}
