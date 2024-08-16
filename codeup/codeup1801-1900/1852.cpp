#include<iostream>
void solution(int a){
    if(a==0)
        return;
    solution(a-1);
    std::cout<<a<<' ';    
}
int main() {
    int n;
    std::cin>>n;
    solution(n);
}