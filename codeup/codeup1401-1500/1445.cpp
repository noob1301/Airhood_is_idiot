#include<iostream>
#include<algorithm>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int l[n+m];
    for(int i=0;i<n+m;i++) scanf("%d",&l[i]);
    std::sort(l,l+(n+m));
    for(int i=0;i<n+m;i++) printf("%d ",l[i]);
}