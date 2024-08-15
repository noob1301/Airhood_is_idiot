#include<iostream>
int c(int b){if(b==1)return 1;return b+c(b-1);}
int main(){int a;std::cin>>a;std::cout<<c(a);}