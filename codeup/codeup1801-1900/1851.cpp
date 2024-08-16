#include<iostream>
int solution(int a) {
    if(a==0) 
        return 0;
    std::cout<<'*';
    return solution(a-1);
}
int main() {
    int n;
    std::cin>>n;
    solution(n);
}
