#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n,m,r;
  scanf("%d",&n);
  vector<int> A,H;
  for(int i=0;i<n;i++){
    scanf("%d",&r);
    A.push_back(r);
  }
  scanf("%d",&m);
  for(int i=0;i<m;i++){
    scanf("%d",&r);
    for(int j=0;j<A.size();j++)
      if(A[j]==r){
        H.push_back(r);
        goto here;
      }
    A.push_back(r);
    here: ;
  }
  for(int i=0;i<H.size();i++) printf("%d ",H[i]);
  if(H.size()==0) printf("0");
  printf("\n");
  sort(A.begin(),A.end());
  for(int i=0;i<A.size();i++) printf("%d ",A[i]);
}
