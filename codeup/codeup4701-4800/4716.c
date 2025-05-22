#include<stdio.h>
int main(){
  int a,b,t=0,s=0;
  for(int i=0;i<10;i++){
    scanf("%d%d",&a,&b);
    t+=-a+b;
    if(s<t) s=t;
  }
  printf("%d",s);
}
