#include<iostream>
int main() {
    char n[100];
    int a,b;
    std::cin>>n>>a>>b;
    char* ptr=n;
    for(int i=a-1;i<=b-1;i++)
        std::cout<<*(ptr+i);
}