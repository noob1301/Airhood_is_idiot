#include<iostream>
int main(){
    int t=0,n,m,h=0;
    for(int i=0;i<4;i++){
        std::cin>>n>>m;
        if(t-n+m>10000){
            t=10000;
            h=10000;
            continue;
        }    
        t+=m-n;
        if(t>h)
            h=t;
    }    
    std::cout<<h;
}