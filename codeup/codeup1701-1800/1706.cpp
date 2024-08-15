#include<iostream>
int main() {
    int a[5];
    for(int i=0;i<5;i++)
        std::cin>>a[i];
    for(int i=4;i>-1;i--)
        std::cout<<a[i]<<' ';    
}