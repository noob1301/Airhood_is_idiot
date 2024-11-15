#include<iostream>
int main(){
    int n,r,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&r);
        if(r%2==1) s++;
    }
    printf("%d",s);
}