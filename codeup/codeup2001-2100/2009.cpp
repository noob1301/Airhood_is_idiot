#include<iostream>
int main() {
    int K,N,A=0;
    std::cin>>K>>N;
    while(K>=N){
        A+=K/N;
        K=K/N+K%N;
    }
    std::cout<<A;
}