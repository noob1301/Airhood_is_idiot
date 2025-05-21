#include<stdio.h>
int l[27][27]={0,};
bool f(int a,int b){
  int s=0;
  for(int i=-1;i<2;i++)
    for(int j=-1;j<2;j++){
      if(i==0&&j==0) continue;
      if(l[a+i][b+j]==1) s++;
    }
  if(l[a][b]==0){
    return (s==3)?true:false;
  }
  else{
    return (s==2||s==3)?true:false;
  }
}
int main(){
  for(int i=1;i<26;i++)
    for(int j=1;j<26;j++) scanf("%d",&l[i][j]);
  for(int i=1;i<26;i++){
    for(int j=1;j<26;j++)
      if(f(i,j)==true) printf("1 ");
      else printf("0 ");
    printf("\n");
  }
}
