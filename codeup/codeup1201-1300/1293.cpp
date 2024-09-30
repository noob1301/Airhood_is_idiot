#include<iostream>
#include<algorithm>
int main(){
    int n;
    scanf("%d",&n);
    int N[n];
    for(int i=0;i<n;i++)
        scanf("%d",&N[i]);
    std::sort(N,N+n);
    printf("%d %d",N[n-1],N[0]);    
}