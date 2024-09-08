#include<iostream>
int a[101]={0,};
int s(int b){
    if(a[b]==1)
        return 1+s(b-1);
    return 0;
}
int main(){
    int n=0,r;
    scanf("%d",&r);
    for(int i=1;i<r+1;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<r+1;i++)
        n+=s(i);
    printf("%d",n);
}