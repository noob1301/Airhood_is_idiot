#include<iostream>
int main(){
    int r,s=0;
    for(int i=0;i<5;i++){
        std::cin>>r;
        s+=r*r;
    }    
    std::cout<<s%10;    
}