#include<iostream>
int main(){
    int n,a=0;
    std::cin>>n;
    while(n!=0){
        n/=10;
        a++;
    }    
    std::cout<<a;    
}