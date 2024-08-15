#include<iostream>
int main() {
    char a[100];
    int b,c;
    std::cin>>a>>b>>c;
    for(int i=0;i<c;i++)
        std::cout<<a[b+i];
}