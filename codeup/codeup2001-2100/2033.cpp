#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
  vector<pair<int,int>> l;
  int k,n,a,b,s;
  scanf("%d%d",&k,&n);
  for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    l.push_back({a,b});
  }
  scanf("%d",&s);
  for(int i=0;i<l.size();i++)
    if(l[i].first==s) s=l[i].second;
    else if(l[i].second==s) s=l[i].first;
  printf("%d",s);
}
