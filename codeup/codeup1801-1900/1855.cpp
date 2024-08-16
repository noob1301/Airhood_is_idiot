#include<iostream>
int solution(int a){
    if(a==1||a==2)
        return 1;
    return solution(a-1)+solution(a-2);    
}
int main() {
    int n;
    std::cin>>n;
    std::cout<<solution(n);
}