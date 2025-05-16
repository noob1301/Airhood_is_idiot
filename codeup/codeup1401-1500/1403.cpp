#include<iostream>
int main(){
  int n;
  scanf("%d",&n);
  int l[n];
  for(int i=0;i<n;i++)
    scanf("%d",&l[i]);
  for(int i=0;i<2;i++)
    for(int j=0;j<n;j++) printf("%d\n",l[j]);
}
