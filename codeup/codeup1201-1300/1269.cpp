#include<iostream>
int main(){
    int a,b,c,n,j;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    j=a;
    for(int i=0;i<n-1;i++){
        j=j*b+c;
    }
    printf("%d",j);
}