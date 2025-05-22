#include<stdio.h>
int main(){
  int n,r,l[100001]={0,};
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&r);
    l[r]++;
  }
  for(int i=0;i<100001;i++)
    if(l[i]==0) continue;
    else{
      for(int j=0;j<l[i];j++) printf("%d ",i);
    }
}
