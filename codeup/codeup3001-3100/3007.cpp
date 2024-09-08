#include<iostream>
int main(){
    int n,m,r,a,b;
    scanf("%d %d",&n,&m);
    int A[n+1];
    A[0]=0;
    for(int i=1;i<n+1;i++){
        scanf("%d",&r);
        A[i]=A[i-1]+r;
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",A[b]-A[a-1]);
    }
}