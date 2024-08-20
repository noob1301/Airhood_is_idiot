#include<iostream>
int solution(int n){
    if(n==1)
        return 1;
    if(n%2==1)
        return 1+solution(3*n+1);
    else
        return 1+solution(n/2);    
}
int main() {
    int n;
    std::cin>>n;
    std::cout<<solution(n);
}