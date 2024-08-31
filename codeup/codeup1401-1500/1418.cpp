#include<iostream>
int main(){
    char a[10]={0,};
    std::cin>>a;
    for(int i=0;a[i]!=0;i++)
        if(a[i]=='t')
            std::cout<<i+1<<' ';
}