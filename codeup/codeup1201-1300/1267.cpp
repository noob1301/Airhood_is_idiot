#include<iostream>
int main(){
    int n,h=0,s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s);
        if(s%5==0) h+=s;
    }
    printf("%d",h);
}