#include<iostream>
int a[100001]={0,1,2,4,0,};
int s(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 4;       
    if(a[n-1]!=0){
        a[n]=a[n-1]%1000+a[n-2]%1000+a[n-3]%1000;
        return a[n];
    }
    return s(n-1)%1000+s(n-2)%1000+s(n-3)%1000;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<s(n)%1000;
}