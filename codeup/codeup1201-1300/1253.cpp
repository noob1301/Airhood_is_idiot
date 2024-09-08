#include<iostream>
int main(){
    int a,b,h,l;
    std::cin>>a>>b;
    h=(a>b)?a:b;
    l=(a>b)?b:a;
    for(int i=l;i<=h;i++)
        std::cout<<i<<' ';
}