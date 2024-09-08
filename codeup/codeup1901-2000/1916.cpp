#include<iostream>
int b[200]={1,1,0,};
int s(int a){
    if(b[a-1]!=0)
        return b[a-1];
    b[a-1]=(s(a-1)+s(a-2))%10009;
    return b[a-1];
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<s(n);
}