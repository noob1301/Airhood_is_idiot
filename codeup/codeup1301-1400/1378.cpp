#include<iostream>
int main(){
    int n,r=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<i+1;j++) r+=j+1;
    printf("%d",r);    
}