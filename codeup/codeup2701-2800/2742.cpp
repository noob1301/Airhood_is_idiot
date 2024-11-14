#include<iostream>
#include<algorithm>
bool c(int a,int b){
    return a>b;
}
int main(){
    int n,a;
    scanf("%d",&n);
    int l[n];
    for(int i=0;i<n;i++) scanf("%d",&l[i]);
    std::sort(l,l+n,c);
    a=l[0];
    l[0]=l[n/2];
    l[n/2]=a;
    for(int i=0;i<n;i++) printf("%d ",l[i]);
}