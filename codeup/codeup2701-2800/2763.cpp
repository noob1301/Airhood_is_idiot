#include<iostream>
int main(){
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=(a>b)?b:a;
    for(int i=2;i<m+1;i++)
        if(a%i==0&&b%i==0){
            printf("no");
            return 0;
        }
    printf("coprime");
}
