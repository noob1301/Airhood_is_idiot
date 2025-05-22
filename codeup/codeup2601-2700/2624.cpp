#include<iostream>
#include<vector>
using namespace std;
int s=0;
int f(vector<int>* a,int b){
  for(int i=0;i<(*a).size();i++)
    if(b%(*a)[i]==0) return 0;
  (*a).push_back(b);
  s+=b;
  return 1;
}
int main(){
  int n;
  vector<int> l;
  scanf("%d",&n);
  if(n==1){
    printf("0");
    return 0;
  }
  else{
    for(int i=2;i<n+1;i++) f(&l,i);
  }
  printf("%d",s);
}
