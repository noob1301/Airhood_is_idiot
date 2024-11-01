#include<iostream>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
        if(l[i]==k){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("-1");
}