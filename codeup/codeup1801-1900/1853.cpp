#include<iostream>
int solution(int a) {
    if(a==0)
        return 0;
    return a+ solution(a-1);    
}
int main() {
    int n;
    std::cin>>n;
    std::cout<<solution(n);
}