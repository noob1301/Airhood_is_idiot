#include<stdio.h>
void f(int a,int b){
  if(a==0) return;
  for(int i=0;i<b;i++) printf("%d ",a-i);
  printf("\n");
  return f(a-b,b+1);
}
int main(){
  int n;
  scanf("%d",&n);
  f((n*(n+1))/2,1);
}
