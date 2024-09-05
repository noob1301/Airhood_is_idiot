#include<iostream>
int s(int a){
    if(a==0||a==1)
        return 1;
    return a*s(a-1);    
}
int main(){
    int n,r;
    std::cin>>n>>r;
    std::cout<<s(n)/(s(r)*s(n-r));
}