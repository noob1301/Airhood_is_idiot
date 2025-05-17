#include<stdio.h>
int main(){
  int s=0;
  char r;
  for(int i=0;i<10;i++){
    scanf("%c",&r);
    s+=r-'0';
  }
  printf("%s",(s%7==4)?"suspect":"citizen");
}
