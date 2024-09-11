#include<iostream>
int main(){
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    if(c=='+') printf("%d",a+b);
    if(c=='-') printf("%d",a-b);
    if(c=='*') printf("%d",a*b);
    if(c=='/') {
        float c=a/(b*1.0);
        printf("%0.2f",c);
    }
};