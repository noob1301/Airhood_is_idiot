#include<iostream>
int solution(int a){
    if(a==0)
        return 1;
    else if(a<0)
        return 0;
    return solution(a-1)+solution(a-2)+solution(a-3);        
}
int main() {
    int n;
    std::cin>>n;
    std::cout<<solution(n);
}