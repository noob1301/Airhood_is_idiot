#include<iostream>
int main() {
    int a,b,c,n;
    std::cin>>a>>b>>c;
    for(int i=1;i<=a&&i<=b&&i<=c;i++)
        if(a%i==0&&b%i==0&&c%i==0)
            n=i;
    std::cout<<n;        
}