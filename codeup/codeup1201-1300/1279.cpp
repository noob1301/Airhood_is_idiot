#include<iostream>
int main(){
    int a,b,s=0;
    std::cin>>a>>b;
    for(int i=a;i<=b;i++) {
        if(i%2==0)
            s-=i;
        else
            s+=i;    
    }
    std::cout<<s;
}