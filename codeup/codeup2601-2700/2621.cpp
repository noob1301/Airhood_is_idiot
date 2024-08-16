#include<iostream>
int main() {
    int N;
    int a=0;
    std::cin>>N;
    for(int i=1;i<=N;i++)
        if(N%i==0)
            a+=i;
    std::cout<<a;        
}