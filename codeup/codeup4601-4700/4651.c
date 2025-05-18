#include<stdio.h>
int main(){
  int a,n;
  for(int i=0;i<3;i++){
    a=0;
    for(int j=0;j<4;j++){
      scanf("%d",&n);
      if(n==0) a++;
    }
    printf("%c\n",(a>2)?((a==3)?'C':'D'):((a==1)?'A':(a==0)?'E':'B'));
  }
}
