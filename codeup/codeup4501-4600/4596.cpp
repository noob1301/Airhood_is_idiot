#include<iostream>
int main(){
    int n,h=0,I;
    for(int i=0;i<81;i++){
        std::cin>>n;
        if(n>h){
            h=n;
            I=i;
        }
    }
    std::cout<<h<<'\n'<<I/9+1<<' '<<I%9+1;
}