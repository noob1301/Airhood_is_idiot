#include<iostream>
int main() {
    int n,k,t;
    std::cin>>n>>k>>t;
    for(int i=0;n+(k-n)*i<=t;i++)
        std::cout<<n+(k-n)*i<<' ';
}