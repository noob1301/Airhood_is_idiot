#include<iostream>
int main(){
  int n,m=0,s;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&s);
    if(s>m) m=s;
  }
  printf("%d",m);
}
