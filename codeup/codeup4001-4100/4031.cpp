#include<iostream>
int main(){
    int n,o=0,e=0;
    for(int i=0;i<7;i++){
        std::cin>>n;
        if(n%2==0&&n>o)
            o=n;
        else if(n%2==1&&n>e)
            e=n;    
    }
    std::cout<<o+e;
}