#include<iostream>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d\n%0.2f",a+b,a-b,a*b,a/b,a%b,a/(b*1.0));
}