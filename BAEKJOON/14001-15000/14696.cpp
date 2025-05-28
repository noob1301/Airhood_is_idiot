#include<iostream>
char f(int* l,int a){
  if(a==4&&*l==*(l+4)) return 'D';
  else if(*l==*(l+4)) return f(l+1,a+1);
  else return (*l>*(l+4))?'A':'B';
}
int main(){
  int n,a,b,A,B;
  int l[2][4];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++)
      for(int k=0;k<4;k++) l[j][k]=0;
    scanf("%d",&a);
    for(int j=0;j<a;j++){
      scanf("%d",&A);
      l[0][4-A]++;
    }
    scanf("%d",&b);
    for(int j=0;j<b;j++){
      scanf("%d",&B);
      l[1][4-B]++;
    }
    printf("%c\n",f(&l[0][0],1));
  }
}
