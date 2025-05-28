#include<iostream>
int main(){
  int n,a,b,h=1001;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    if(a<=b&&b<h) h=b;
  }
  printf("%d",(h==1001)?-1:h);
}
